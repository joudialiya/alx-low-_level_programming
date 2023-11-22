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

            if grid[y][x] == 0:

                if x > 1 and grid[y][x - 1] == 1 and cpy[y][x] != 'x':
                    cpy[y][x] = 'x'
                    count += 1
                if x < lengthX - 1 and grid[y][x + 1] == 1 and cpy[y][x] != 'x':
                    cpy[y][x] = 'x'
                    count += 1
                if y > 1 and grid[y - 1][x] == 1 and cpy[y][x] != 'x':
                    cpy[y][x] = 'x'
                    count += 1
                if y < lengthY - 1 and grid[y + 1][x] == 1 and cpy[y][x] != 'x':
                    cpy[y][x] = 'x'
                    count += 1
#    for row in cpy:
#        print(" ".join(map(str, row)))
    return count
