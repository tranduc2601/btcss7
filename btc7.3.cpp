#include <stdio.h>
int main() {
    int mang[5] = {2, 6, 0, 1, 2006};
    int coSoChan = 0;
    printf(" cac phan tu la so chan trong mang: \n");
    for (int i = 0; i < 5; i++) {
        if (mang[i] % 2 == 0) {
            printf("%d ", mang[i]);
            coSoChan = 1;
        }
    }
    if (!coSoChan) {
        printf(" mang khong chua so chan \n");
    }
    return 0;
}

