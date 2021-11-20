#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    int *ptr;
    char name;
    printf("Enter the number of candidates:\n:");
    scanf("%d", &n);
    ptr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter the candidates %d details:\n", i + 1);
        scanf("%d", &ptr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Name of the candiadate %d is %d:\n", i + 1, ptr[i]);
    }
    printf("Enter the values if you want to exetend the size of the array:");
    scanf("%d", &n);
    ptr = (int *)realloc(ptr, n * sizeof(int));
    for (int i=0;i<n ;i++)
    {
    printf("Enter the candidates %d details:\n", i+3);
    scanf("%d",&ptr[i]);
    }
     for (int i = 0; i < n; i++)
    {
        printf("Name of the candiadate %d is %d:\n", i+32, ptr[i]);
    }
    free(ptr);
    printf("The value of ptr is %d\n",ptr);
    return 0;
}