#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    do
    {
        printf("nhap so phan tu cua mang");
        scanf("%d", &n);
    }while (n <=0 );
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
    printf("cac phan tu lơn hon tat ca phan tu dung sau no:\n");
    int max=arr[n-1];
    printf("%d",max);
    for (int i = n-2; i>=0; i--)
    {
        if (arr[i]>max)
        {
            printf("%d  ",arr[i]);
            max=arr[i];
        }

    }
    free(arr);
    return 0;

}