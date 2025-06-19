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
    int position;
    do
    {
        printf("nhap vitri muon them:",n-1);
        scanf("%d", &position);
    }while (position < 0 || position >=n);
    int new;
    printf("nhap gia tri muon them");
    scanf("%d", &new);
    int *temp = (int*)realloc(arr,(n+1) * sizeof(int));
    if (temp==NULL&& n>0)
    {
        printf("khong the cap phat bo nho\n");
        free(arr);
        return 1;
    }
    arr = temp;
    for (int i =n; i >position; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[position] = new;
    n++;

    printf("mang sau khi xoa:");
    for (int i = 0; i < n; i++)
    {
        printf("%d",arr[i]);
    }
    free(arr);
    return 0;

}
