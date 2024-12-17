#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;	
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }
    int *mang = (int *)malloc(n * sizeof(int));
    if (mang == NULL) {
        printf("Khong the cap phat bo nho!\n");
        return 1;
    }
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &mang[i]);
    }
    printf("\nCac phan tu trong mang la:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", mang[i]);
    }
    printf("\n");
    free(mang);
    return 0;
}

