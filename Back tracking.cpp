#include <iostream>
#include <cstring>

using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

bool findPath(int grid[MAX_ROWS][MAX_COLS], int rows, int cols, int src_row, int src_col, int dst_row, int dst_col, int path[MAX_ROWS * MAX_COLS][2], int& path_len) {
    // Check if source and destination are valid
    if (src_row < 0 || src_row >= rows || src_col < 0 || src_col >= cols || dst_row < 0 || dst_row >= rows || dst_col < 0 || dst_col >= cols || grid[src_row][src_col] == 0 || grid[dst_row][dst_col] == 0) {
        return false;
    }
//This part of the code checks if the source and destination coordinates are the same. If they are, it means that the path has been found,.
// and the function returns true. Before returning, the current cell 
//(which is also the destination cell) is added to the path by storing its coordinates in the path array and incrementing the path length.
    // Check if source and destination are the same
    if (src_row == dst_row && src_col == dst_col) {
        path[path_len][0] = src_row;
        path[path_len][1] = src_col;
        path_len++;
        return true;
    }

    // Mark the current cell as visited
    grid[src_row][src_col] = 0;

    // Try to move in each direction (up, down, left, right) recursively
    int next_row, next_col;
    if (findPath(grid, rows, cols, src_row - 1, src_col, dst_row, dst_col, path, path_len)) { // Try up
        next_row = src_row - 1;
        next_col = src_col;
    }
    else if (findPath(grid, rows, cols, src_row, src_col + 1, dst_row, dst_col, path, path_len)) { // Try right
        next_row = src_row;
        next_col = src_col + 1;
    }
    else if (findPath(grid, rows, cols, src_row + 1, src_col, dst_row, dst_col, path, path_len)) { // Try down
        next_row = src_row + 1;
        next_col = src_col;
    }
    else if (findPath(grid, rows, cols, src_row, src_col - 1, dst_row, dst_col, path, path_len)) { // Try left
        next_row = src_row;
        next_col = src_col - 1;
    }
    else {
        // No path found from this cell, mark as unvisited and return false
        grid[src_row][src_col] = 1;
        return false;
    }

    // Add the current cell to the path
    path[path_len][0] = src_row;
    path[path_len][1] = src_col;
    path_len++;

    // Return true if destination found
    if (next_row == dst_row && next_col == dst_col) {
        path[path_len][0] = dst_row;
        path[path_len][1] = dst_col;
        path_len++;
        return true;
    }

    // Try to move to the next cell
    return true;
}

int main() {
    int grid[MAX_ROWS][MAX_COLS] = { {1, 1, 1, 0, 1},
    {1, 0, 1, 1, 0},
    {1, 1, 1, 1, 1},
    {0, 1, 0, 1, 0},
    {1, 1, 1, 1, 1} };
    int rows = 5;
    int cols = 5;
    int src_row = 0;
    int src_col = 0;
    int dst_row = 4;
    int dst_col = 4;
    int path[MAX_ROWS * MAX_COLS][2];
    int path_len = 0;
    
    if (findPath(grid, rows, cols, src_row, src_col, dst_row, dst_col, path, path_len)) {
        cout << "Path found: ";
        for (int i = path_len - 1; i >= 0; i--) {
            cout << "(" << path[i][0] << ", " << path[i][1] << ")";
            if (i != 0) {
                cout << " -> ";
            }
        }
        cout << endl;
    }
    else {
        cout << "No path found." << endl;
    }

    return 0;

}

