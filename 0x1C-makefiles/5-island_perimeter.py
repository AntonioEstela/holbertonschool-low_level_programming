#!/usr/bin/python3
""" Island Perimeter module """


def island_perimeter(grid):
    """Function that returns the perimeter of the island described in grid"""

    Perimeter = 0

    for y in range(len(grid)):
        for x in range(len(grid[0])):
            if grid[y][x] == 1:
                Perimeter += 4
                if x > 0:
                    if grid[y][x - 1] == 1:
                        Perimeter -= 2
                if y > 0:
                    if grid[y - 1][x] == 1:
                        Perimeter -= 2


    return Perimeter
