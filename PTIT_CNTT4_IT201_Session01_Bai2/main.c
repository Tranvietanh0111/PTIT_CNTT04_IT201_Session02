#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    do
    {
        printf("nhap so phan tu cua mang");
        scanf("%d", &n);
    }while (n <=    0 || n>100 );
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
    int number;
    printf("so cna dem:");
    scanf("%d", &number);
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == number)
        {
            count++;
        }
    }
    printf("số %d xuât hien % lan",number,count);
    free(arr);
    return 0;

}
