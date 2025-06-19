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
    int sum;
    printf("nhap so can tim tong");
    scanf("%d", &sum);
    int flag=0;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (arr[i] + arr[j]==sum)
            {
                printf("cặp phan tử có tong bằng %d là %d %d",sum,arr[i],arr[j]);
                flag=1;
            }
        }
    }
    if (flag==1)
    {
        printf("không tồn tại 2 cặp số có tổng bằng %d",sum);
    }
    free(arr);
    return 0;

}