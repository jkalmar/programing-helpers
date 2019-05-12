#!/usr/bin/env python3

import argparse
import textwrap as _textwrap


class LineWrapRawTextHelpFormatter(argparse.RawDescriptionHelpFormatter):
    def _split_lines(self, text, width):
        text = self._whitespace_matcher.sub(' ', text).strip()
        return _textwrap.wrap(text, 120)


def generateIf():
    pass


def generateEnum():
    pass


if __name__ == "__main__":
    parser = argparse.ArgumentParser(prog="str2enum",
                                     description=("Simple script to generate C/C++ enum from values. It can generate\n"
                                                  "just the enum or also helper function to convert string to enum"),
                                     formatter_class=LineWrapRawTextHelpFormatter)

    parser.add_argument("--only-enum", action="store_true",
                        help="generate only enum")
    parser.add_argument("--enummode", default="plain", const="plain", nargs="?", choices=["plain", "class"],
                        help="generate plain enum or enum class(c++11), default=%(default)s")
    parser.add_argument("--strmode", default="if", const="if", nargs="?",
                        choices=["if", "strcmp", "operator", "map"],
                        help="set str -> enum conversion, default=%(default)s")
    parser.add_argument("--values", nargs="+",
                        help="strings from which enum will be created")

    parsed = parser.parse_args()

    print(parsed.only_enum)
    print(parsed.enummode)
    print(parsed.strmode)
    print(parsed.values)
