#include <stdio.h>

int main() {
    int n, i;
    int a[100];
    int findNumber;
    int sum = 0;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap cac phan tu cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Nhap gia tri can tim: ");
    scanf("%d", &findNumber);

    printf("Cac phan tu co gia tri bang %d co chi so: ", findNumber);
    for (i = 0; i < n; i++) {
        if (a[i] == findNumber) {
            printf("%d ", i);
            sum += a[i];
        }
    }

    printf("\nTong cac phan tu co gia tri bang %d la: %d\n", findNumber, sum);

    return 0;
}