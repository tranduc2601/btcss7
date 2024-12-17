#include <stdio.h>
int main() {
    int mang[5];
    printf(" nhap 5 phan tu cua mang: \n");
    for (int i = 0; i < 5; i++) {
        printf(" nhap phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
    printf("\n cac phan tu trong mang la: \n");
    for (int i = 0; i < 5; i++) {
        printf(" phan tu thu %d: %d \n", i + 1, mang[i]);
    }
    return 0;
}

