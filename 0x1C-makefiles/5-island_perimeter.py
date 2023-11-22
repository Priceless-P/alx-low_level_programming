#!/usr/bin/python3
def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid
     The grid represents water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    """
    rows = len(grid)
    cols = len(grid[0]) if rows > 0 else 0

    ed = 0
    sz = 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                sz += 1
                if i > 0 and grid[i - 1][j] == 1:
                    ed += 1
                if j > 0 and grid[i][j - 1] == 1:
                    ed += 1
    return sz * 4 - ed * 2
