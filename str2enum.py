#!/usr/bin/env python3

import argparse
import textwrap as _textwrap


class LineWrapRawTextHelpFormatter(argparse.RawDescriptionHelpFormatter):
    def _split_lines(self, text, width):
        text = self._whitespace_matcher.sub(' ', text).strip()
        return _textwrap.wrap(text, 120)


def generate_if(config):
    if config.only_enum:
        return

    pass


def generate_enum(config):
    print("typedef enum")
    print("{")

    first = True

    for m in config.values:
        if first:
            print((" "*config.spaces ) + config.enum_prefix + m + " = " + str(config.enum_start) + ",")
            first = False
        else:
            print((" "*config.spaces ) + config.enum_prefix + m + ",")

    print("} " + config.enum_name + ";")


def handle_args():
    parser = argparse.ArgumentParser(prog="str2enum",
                                     description=("Simple script to generate C/C++ enum from values. It can generate\n"
                                                  "just the enum or also helper function to convert string to enum"),
                                     formatter_class=LineWrapRawTextHelpFormatter)

    parser.add_argument("--only-enum", action="store_true",
                        help="generate only enum")
    parser.add_argument("--enum-mode", default="plain", choices=["plain", "class"],
                        help="generate plain enum or enum class(c++11), default=%(default)s")
    parser.add_argument("--enum-name", default="ShinyEnum", help="Set the name of the enum, default=%(default)s")
    parser.add_argument("--enum-prefix", default="E_", help="Specify the prefix for enum value, default=%(default)s")
    parser.add_argument("--enum-start", default=0, type=int, help="Set initial enum value, default=%(default)s")
    parser.add_argument("--spaces", default=3, type=int, help="Set spacing, default=%(default)s")
    parser.add_argument("--str-mode", default="if", choices=["if", "strcmp", "operator", "map"],
                        help="set str -> enum conversion, default=%(default)s")
    parser.add_argument("values", nargs="+",
                        help="strings from which enum will be created")

    return parser.parse_args()


if __name__ == "__main__":
    config = handle_args()

    print(config.only_enum)
    print(config.enum_mode)
    print(config.str_mode)
    print(config.enum_name)
    print(config.enum_prefix)
    print(config.enum_start)
    print(config.values)

    generate_enum(config)
    print()
    generate_if(config)

