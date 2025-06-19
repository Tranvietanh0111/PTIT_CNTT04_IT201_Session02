#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    do
    {
        printf("nhap so phan tu cua mang");
        scanf("%d", &n);
    }while (n <=0 || n>100 );
    int *arr = (int*)malloc(n * sizeof(int));
    if (arr==NULL){
        printf("khong du bo nho\n");
        return 1;
    }
    printf("nhap phan tu cua mang");
    for (int i = 0; i < n; i++)
    {
        printf("phan thu thu %d",i+1);
        scanf("%d", &arr[i]);
    }
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("phan tu lon nhat cua mang la %d\n,max");
    free(arr);
    return 0;

}
