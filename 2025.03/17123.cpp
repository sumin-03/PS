#include <iostream>

using namespace std;

void rsum(int* list, int* row_sum, int size) {
    for(int i = 0; i < size; i++) {
        row_sum[i] = 0;
        for(int j = 0; j < size; j++) {
            row_sum[i] += *(list + size * i + j);
        }
    }
}

void csum(int* list, int* col_sum, int size) {
    for(int i = 0; i < size; i++) {
        col_sum[i] = 0;
        for(int j = 0; j < size; j++) {
            col_sum[i] += *(list + size * j + i);
        }
    }
}

int main(void) {
    int T;
    int n, m;
    int r1, c1, r2, c2, v;
    cin >> T;

    while(T--) {
        cin >> n >> m;

        int list[n][n] = {0, };
        int temp[n + 2][n + 2] = {0, };
        int row_sum[n] = {0, };
        int col_sum[n] = {0, };

        for(int i = 0; i < (n + 1) * (n + 1); i++) {
            *(&temp[0][0] + i) = 0;
        }

        for(int i = 0; i < n * n; i++) {
            cin >> *(&list[0][0] + i);
        }

        for(int i = 0; i < m; i++) {
            cin >> r1 >> c1 >> r2 >> c2 >> v;
            r1--; c1--; r2--; c2--;

            temp[r1][c1] += v;
            temp[r1][c2 + 1] -= v;
            temp[r2 + 1][c1] -= v;
            temp[r2 + 1][c2 + 1] += v;
        }

        for(int i = 0; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                temp[i][j] += temp[i][j - 1];
            }
        }

        for(int j = 0; j <= n; j++) {
            for(int i = 1; i <= n; i++) {
                temp[i][j] += temp[i - 1][j];
            }
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                list[i][j] += temp[i][j];
            }
        }

        rsum(&list[0][0], row_sum, n);
        csum(&list[0][0], col_sum, n);

        for(int i = 0; i < n; i++) {
            cout << row_sum[i] << " ";
        }
        cout << "\n";

        for(int i = 0; i < n; i++) {
            cout << col_sum[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
