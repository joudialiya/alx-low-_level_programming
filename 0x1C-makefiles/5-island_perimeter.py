#!/usr/bin/python3
"""Calculate the perimeter of an island in a grid world"""


def island_perimeter(grid):
    """the core function ="""
    count = 0
    lengthY = len(grid)
    lengthX = len(grid[0])
    cpy = grid.copy()

    for y in range(0, lengthY):
        for x in range(0, lengthX):

            if grid[y][x] == 1:

                if x == 0 or grid[y][x - 1] != 1:
                    count += 1
                if x == lengthX - 1 or grid[y][x + 1] != 1:
                    count += 1
                if y == 0 or grid[y - 1][x] != 1:
                    count += 1
                if y == lengthY - 1 or grid[y + 1][x] != 1:
                    count += 1
    return count
