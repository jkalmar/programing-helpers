#!/usr/bin/env python3

import argparse



def generateIf():
    pass


def generateEnum():
    pass


if __name__ == "__main__":
    parser = argparse.ArgumentParser("str2enum",
        description="""Simple script to generate C/C++ enum from values. It can generate
        just the enum or also helper function to convert string to the enum""")

    parser.add_argument("--only-enum", action="store_true", help="Generate only enum")
    parser.add_argument("--enummode", default="plain", const="plain", nargs="?", choices=["plain", "class"], help="Generate plain enum or enum class(c++11), default=%(default)s")
    parser.add_argument("--strmode", default="if", const="if", nargs="?", choices=["if", "strcmp", "operator", "map"], help="Set str -> enum conversion, default=%(default)s" )
    parser.add_argument("--values", nargs="+")

    parsed = parser.parse_args()

    print(parsed.only_enum)
    print(parsed.enummode)
    print(parsed.strmode)
    print(parsed.values)

