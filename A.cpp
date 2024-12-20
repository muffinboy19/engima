#include <iostream>
#include <vector>
using namespace std;

bool is_safe(vector<vector<int>>& board, int i, int j) {
    int n = board.size();
    int j_left = j, j_right = j;

    while (i >= 0) {
        if ((j_left >= 0 && board[i][j_left] == 1) || board[i][j] == 1 || (j_right < n && board[i][j_right] == 1)) {
            return false;
        }
        i--;
        j_left--;
        j_right++;
    }
    return true;
}

int rec(vector<vector<int>>& board, int i) {
    int n = board.size();
    if (i == n) {
        return 1;
    } else {
        int nb_solutions = 0;
        for (int j = 0; j < n; j++) {
            if (is_safe(board, i, j)) {
                board[i][j] = 1;
                nb_solutions += rec(board, i + 1);
                board[i][j] = 0;
            }
        }
        return nb_solutions;
    }
}

int n_queens(int n) {
    vector<vector<int>> board(n, vector<int>(n, 0));
    return rec(board, 0);
}

int main() {
    cout << n_queens(8) << endl; // Output: 92
    return 0;
}
