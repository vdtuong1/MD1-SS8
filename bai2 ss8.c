#include <stdio.h>

int main() {
    int row, col, i, j;
    float a[100][100];
    float sum = 0;

    printf("Nhap so hang cua mang: ");
    scanf("%d", &row);

    printf("Nhap so cot cua mang: ");
    scanf("%d", &col);

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%f", &a[i][j]);
        }
    }

    printf("Cac phan tu co gia tri chan la: ");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if ((int)a[i][j] % 2 == 0) {
                printf("%.2f ", a[i][j]);
                sum += a[i][j];
            }
        }
    }

    printf("\nTong cac phan tu co gia tri chan la: %.2f\n", sum);

    return 0;
}