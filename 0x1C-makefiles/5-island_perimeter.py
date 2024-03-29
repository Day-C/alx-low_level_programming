#!/usr/bin/python3
'''Calculate the perimeter of an island'''


def island_perimeter(grid):
    '''function calculars the perimeter of an island represented in grip form

    Args:
        grid is a list of list(matrix) of integers(1's, 0's) Where:
            0: represents an area covered by water
            1: represents an area covered by land
    '''
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return (size * 4 - edges * 2)
