#!/usr/bin/python3
""" Island Perimeter module """


def island_perimeter(gird):
    """Function that returns the perimeter of the island described in grid"""

    Perimeter = 0

    for y in range(len(gird)):
        for x in range(len(gird[y])):
            if gird[y][x] == 1:
                if Perimeter == 0:
                    Perimeter += 4
                try:
                    if gird[y][x - 1] == 1:
                        Perimeter += 1

                    if gird[y][x + 1] == 1:
                        Perimeter += 1

                    if gird[y - 1][x] == 1:
                        Perimeter += 1

                    if gird[y + 1][x] == 1:
                        Perimeter += 1

                except Exception:
                    pass

    return Perimeter
