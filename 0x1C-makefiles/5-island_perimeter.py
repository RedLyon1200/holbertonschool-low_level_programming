#!/usr/bin/python3

"""
[summary]
"""


def island_perimeter(grid):
    """
    [summary]
    """
    water = 0
    terrain = 1
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for v_value in range(height):
        for h_value in range(width):
            if grid[v_value][h_value] == terrain:
                size += 1
                if (h_value > 0 and grid[v_value][h_value - 1] == terrain):
                    edges += 1
                if (v_value > 0 and grid[v_value - 1][h_value] == terrain):
                    edges += 1
    return size * 4 - edges * 2
