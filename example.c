
#include <stdio.h>

int main(void) {
    int start[] = {1, 3, 0, 5, 8, 5};
    int finish[] = {4, 5, 6, 7, 9, 9};
    int n = 6;

    int lastSelected = 0;

    printf("Selected activities: A1 ");

    for (int i = 1; i < n; i++) {
        if (start[i] >= finish[lastSelected]) {
            printf("A%d ", i + 1);
            lastSelected = i;
        }
    }

    printf("\n");
    return 0;
}
