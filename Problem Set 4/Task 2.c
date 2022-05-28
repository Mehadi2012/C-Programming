#include <stdio.h>
int main() {
    int n = 6; // Number of processes
    int m = 4; // Number of resources
    int alloc[6][4] = {{0, 1, 0, 3}, // P0 // Allocation Matrix
                       {2, 0, 0, 3}, // P1

                       {3, 0, 2, 0}, // P2
                       {2, 1, 1, 5}, // P3
                       {0, 0, 2, 2}, // P4
                       {1, 2, 3, 1}}; //P5

    int max[6][4] = {{6, 4, 3, 4}, // P0 // MAX Matrix
                     {3, 2, 2, 4}, // P1
                     {9, 1, 2, 6}, // P2
                     {2, 2, 2, 8}, // P3
                     {4, 3, 3, 7}, // P4
                     {6, 2, 6, 5}}; //P5

    int avail[4] = {2, 2, 2, 1}; //Available resources

    int a[n], b[n], c = 0;
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }
    int s[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            s[i][j] = max[i][j] - alloc[i][j];
        }
    }
    for (int x = 0; x < 5; x++) {
        for (int y = 0; y < n; y++) {
            if (a[y] == 0) {

                int count = 0;
                for (int j = 0; j < m; j++) {
                    if (s[y][j] > avail[j]) {
                        count = 1;
                        break;
                    }
                }
                if (count == 0) {
                    b[c++] = y;
                    for (int o = 0; o < m; o++)
                        avail[o] += alloc[y][o];
                    a[y] = 1;
                }
            }
        }
    }

    int count = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) {
            count = 0;
            printf("DeadLock Ahead");
            break;
        }
    }
    if (count == 1) {
        printf("Safe Sequence: \n");
        for (int i = 0; i < n - 1; i++)
            printf(" P%d ->", b[i]);
        printf(" P%d", b[n - 1]);
    }
    return (0);
}
