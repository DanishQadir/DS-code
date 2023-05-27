#include <iostream>
using namespace std;

const int N = 4; 

int maze[N][N] = { 
    {1, 0, 0, 0},
    {1, 1, 0, 0},
    {0, 1, 0, 0},
    {0, 1, 1, 1}
};

int path[N][N] = { 
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
};

bool is_valid(int x, int y) {
    if (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1 && path[x][y] == 0) {
        return true;
    } else {
        return false;
    }
}

bool solve_maze(int x, int y) {
    if (x == N - 1 && y == N - 1)}
        path[x][y] = 1;
        return true;
    }
    if (is_valid(x, y)) {
        path[x][y] = 1; 
        if (solve_maze(x + 1, y)) { 
            return true;
        }
        if (solve_maze(x, y + 1)) { 
            return true;
        }
        path[x][y] = 0;
        return false;
    }
    return false;
}

int main() {
    if (solve_maze(0, 0)) {
        cout << "The optimal path to reach the destination is:\n";
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                cout << path[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "There is no path to reach the destination." << endl;
    }
    return 0;
}

