#!/usr/bin/env python3

import argparse
import textwrap as _textwrap


class LineWrapRawTextHelpFormatter(argparse.RawDescriptionHelpFormatter):
    def _split_lines(self, text, width):
        text = self._whitespace_matcher.sub(' ', text).strip()
        return _textwrap.wrap(text, 120)


def do_generate_if(config, current, level):
    if "VAL" in current:
        print((" "*level*config.spaces) + "if( size == " + str(level-1) + " ) return " +
              config.enum_prefix + current["VAL"] + ";")

    for k, v in current.items():
        if "VAL" == k:
            continue

        print(" "*level*config.spaces, end="")
        print("if( str[ " + str(level - 1) + " ] == '" + k + "' )")
        print((" "*level*config.spaces) + "{")

        do_generate_if(config, v, level+1)
        print((" "*level*config.spaces) + "}")


def generate_if(config):
    cmptree = {}
    current = cmptree

    for m in config.values:
        current = cmptree
        for c in m:
            newtree = {}
            if c in current:
                current = current[c]
            else:
                current[c] = newtree
                current = newtree

        current["VAL"] = m

    print(config.enum_name + " str2" + config.enum_name + "( const char* str, size_t size )")
    print("{")
    do_generate_if(config, cmptree, 1)
    print((" "*config.spaces) + "return " + config.enum_prefix + config.unknown + ";")
    print("}")

def generate_strcmp(config):
    print(config.enum_name + " str2" + config.enum_name + "( const char* str, size_t size )")
    print("{")

    sizes = {}

    for m in config.values:
        size = len(m)
        if size in sizes:
            sizes[size].append(m)
        else:
            sizes[size] = [m]

    keys = list(sizes.keys())
    keys.sort()

    for size in keys:
        values = sizes[size]
        print(" "*config.spaces, end="")
        print("if( size == " + str(size) + " )")
        print(" "*config.spaces, end="")
        print("{")
        for val in values:
            print(" "*config.spaces * 2, end="")
            print('if( strncmp(str, "' + val + '", ' + str(size) + ') == 0 )', end="")
            print(" return " + config.enum_prefix + val + ";")

        print(" "*config.spaces, end="")
        print("}")

    print((" "*config.spaces) + "return " + config.enum_prefix + config.unknown + ";")
    print("}")

def generate_operator(config):
    raise NotImplementedError("operator mode not implemented")

def generate_map(config):
    raise NotImplementedError("map mode not implemented")

def generate_str2enum(config):
    if config.only_enum:
        return

    if config.str_mode == "if":
        generate_if(config)
    elif config.str_mode == "strcmp":
        generate_strcmp(config)
    elif config.str_mode == "operator":
        generate_operator(config)
    elif config.str_mode == "map":
        generate_map(config)


def generate_enum(config):
    if config.enum_mode == "class":
        raise NotImplementedError("class mode not implemented")

    print("typedef enum")
    print("{")

    first = True

    for m in config.values:
        if first:
            print((" "*config.spaces) + config.enum_prefix +
                  m + " = " + str(config.enum_start) + ",")
            first = False
        else:
            print((" "*config.spaces) + config.enum_prefix + m + ",")

    print((" "*config.spaces) + config.enum_prefix + config.unknown)

    print("} " + config.enum_name + ";")

def generate_gperf(config):
    for m in config.values:
        print(m + ", " + config.enum_prefix + m)




def handle_args():
    parser = argparse.ArgumentParser(prog="str2enum",
                                     description=("Simple script to generate C/C++ enum from values. It can generate\n"
                                                  "just the enum or also helper function to convert string to enum"),
                                     formatter_class=LineWrapRawTextHelpFormatter)

    parser.add_argument("--only-enum", action="store_true",
                        help="generate only enum")
    parser.add_argument("--enum-mode", default="plain", choices=["plain", "class"],
                        help="generate plain enum or enum class(c++11), default=%(default)s")
    parser.add_argument("--enum-name", default="ShinyEnum",
                        help="Set the name of the enum, default=%(default)s")
    parser.add_argument("--enum-prefix", default="E_",
                        help="Specify the prefix for enum value, default=%(default)s")
    parser.add_argument("--enum-start", default=0, type=int,
                        help="Set initial enum value, default=%(default)s")
    parser.add_argument("--unknown", default="UNK", help="Set the name of unknown element, default=%(default)s")
    parser.add_argument("--spaces", default=3, type=int,
                        help="Set spacing, default=%(default)s")
    parser.add_argument("--str-mode", default="if", choices=["if", "strcmp", "operator", "map", "gperf"],
                        help="set str -> enum conversion, default=%(default)s")
    parser.add_argument("values", nargs="+",
                        help="strings from which enum will be created")

    return parser.parse_args()


if __name__ == "__main__":
    config = handle_args()

    if config.str_mode == "gperf":
        generate_gperf(config)
    else:
        generate_enum(config)
        print()
        generate_str2enum(config)


