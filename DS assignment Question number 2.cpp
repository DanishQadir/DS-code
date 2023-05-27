#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_valid(const vector<vector<int>>& grid, int row, int col) {
    /*
    Check whether placing a flag at (row, col) violates the diagonal condition
    */
    int n = grid.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1 && abs(row - i) == abs(col - j)) {
                return false;
            }
        }
    }
    return true;
}

bool backtrack(vector<vector<int>>& grid, int row, int col) {
    /*
    Backtracking algorithm to place flags in the grid
    */
    int n = grid.size();
    if (col == n) { // Reached end of row, move to next row
        col = 0;
        row += 1;
    }
    if (row == n) { // Reached end of grid, solution found
        return true;
    }
    if (grid[row][col] == 1) { // Cell already filled, move to next cell
        return backtrack(grid, row, col+1);
    }
    for (int flag = 0; flag <= 1; flag++) {
        grid[row][col] = flag;
        if (is_valid(grid, row, col) && backtrack(grid, row, col+1)) {
            return true;
        }
        grid[row][col] = 0; // Backtrack
    }
    return false;
}

void solve() {
    /*
    Solve the King Nohintzen Problem for a 5x5 grid
    */
    vector<vector<int>> grid(5, vector<int>(5, 0));
    backtrack(grid, 0, 0);
    int count = 0;
    for (auto& row : grid) {
        count += count_if(row.begin(), row.end(), [](int val){return val == 1;});
    }
    cout << "Maximum number of flags placed: " << count << endl;
}

int main() {
    solve();
    return 0;
}

