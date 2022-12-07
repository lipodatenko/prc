#include <stdio.h>

int main(void) {
    int a[] = {4, 6, 7, 8, 9, 9, 9, 23, 99, 200};
    int b[] = {1, 2, 12, 33, 112};
    int i, j;

    int n = sizeof a / sizeof a[0];
    int m = sizeof b / sizeof b[0];

    i = j = 0;

    while ((i < n) && (j < m)) {
        if (a[i] <= b[j]) printf("%d ", a[i++]);
        else printf("%d ", b[j++]);
    }

    if (i < n) while (i < n) printf("%d ", a[i++]);
    else while (j < m) printf("%d ", b[j++]);

    printf("\n");

    return 0;
}
