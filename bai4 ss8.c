#include <stdio.h>

int main() {
    int n, addIndex, addValue;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri can them: ");
    scanf("%d", &addValue);
    printf("Nhap vi tri can them: ");
    scanf("%d", &addIndex);
    if (addIndex < 0 || addIndex > n) {
        printf("Vi tri chen khong hop le.\n");
        return 0;
    }
    for (int i = n - 1; i >= addIndex; i--) {
        arr[i + 1] = arr[i];
    }
    arr[addIndex] = addValue;
    n++;
    printf("Mang sau khi them phan tu:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}