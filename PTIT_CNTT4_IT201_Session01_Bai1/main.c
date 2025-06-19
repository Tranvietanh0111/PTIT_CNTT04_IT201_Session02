#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    do {
        printf("Nhap so phan tu cua mang: ");
        scanf("%d", &n);
    } while (n <= 0 || n > 100);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong du bo nho\n");
        return 1;
    }

    printf("Nhap phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Phan tu lon nhat cua mang la %d\n", max);

    free(arr);
    return 0;
}

