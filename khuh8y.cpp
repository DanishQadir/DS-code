#include <iostream>
#include <vector>

using namespace std;

const int MAX = 100;

int maze[MAX][MAX];
int sol[MAX][MAX];
int n;

void print_solution() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << sol[i][j] << " ";
        }
        cout << endl;
    }
}

bool solve_maze_util(int x, int y) {
    if (x == n - 1 && y == n - 1) {
        sol[x][y] = 1;
        return true;
    }

    if (x >= 0 && x < n && y >= 0 && y < n && maze[x][y] == 1) {
        sol[x][y] = 1;

        if (solve_maze_util(x + 1, y)) {
            return true;
        }

        if (solve_maze_util(x, y + 1)) {
            return true;
        }

        sol[x][y] = 0;
        return false;
    }

    return false;
}

void solve_maze() {
    if (solve_maze_util(0, 0)) {
        cout << "Solution exists." << endl;
        print_solution();
    }
    else {
        cout << "Solution does not exist." << endl;
    }
}

int main() {
    cout << "Enter the size of the maze: ";
    cin >> n;
    cout << "Enter the maze: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> maze[i][j];
        }
    }
    solve_maze();
    return 0;
}

