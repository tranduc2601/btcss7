#include <stdio.h>
int main() {
    int arr[5] = {1, 2, 3, 0, 5};
    int max = arr[0];
    int min = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    printf(" so lon nhat la: %d\n", max);
    printf(" so nho nhat la: %d\n", min);
    return 0;
}

