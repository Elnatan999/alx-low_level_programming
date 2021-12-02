#!/usr/bin/python3
"""
Defines the island_perimeter function
that returns the perimeter of an array of integers
"""


def island_perimeter(grid):
    """
        Argument
          @grid is a list of list of integers
    """

    pmeter = 0
    width = len(grid[0])
    height = len(grid)

    # first suround the lake with water to make calculations simple
    grid.insert(0, [0 for x in range(width)])
    grid.append([0 for x in range(width)])
    for row in range(height + 2):
            grid[row].append(0)
            grid[row].insert(0, 0)

    for row in range(1, height + 1):
        for col in range(1, width + 1):
            if grid[row][col] == 1:
                # check if the box is near to the lake
                if grid[row][col - 1] == 0:
                    pmeter += 1
                if grid[row][col + 1] == 0:
                    pmeter += 1

                if grid[row - 1][col] == 0:
                    pmeter += 1

                if grid[row + 1][col] == 0:
                    pmeter += 1

    return pmeter
