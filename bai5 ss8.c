#include <stdio.h>

int main() {
    int n, updateIndex, updateValue;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri can cap nhat: ");
    scanf("%d", &updateValue);
    printf("Nhap vi tri can cap nhat: ");
    scanf("%d", &updateIndex);
    if (updateIndex < 0 || updateIndex >= n) {
        printf("Vi tri cap nhat khong hop le.\n");
        return 0;
    }
    arr[updateIndex] = updateValue;
    printf("Mang sau khi cap nhat phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}