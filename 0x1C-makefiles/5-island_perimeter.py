#!/usr/bin/python3
"""Calculate the perimeter of an island in a grid world"""


def island_perimeter(grid):
    """the core function ="""
    count = 0
    length = len(grid)
    cpy = grid.copy()
    for y in range(0, length):
        for x in range(0, length):
            if grid[y][x] == 0:
                if x > 1 and grid[y][x - 1] == 1:
                    cpy[y][x] = 'x'
                    count += 1
                if x < length - 1 and grid[y][x + 1] == 1:
                    cpy[y][x] = 'x'
                    count += 1
                if y > 1 and grid[y - 1][x] == 1:
                    cpy[y][x] = 'x'
                    count += 1
                if y < length - 1 and grid[y + 1][x] == 1:
                    cpy[y][x] = 'x'
                    count += 1
    return count
