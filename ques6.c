// Program to print first N Even natural numbers
#include <stdio.h>
int main()
{
    int N, i;
    printf("Enter a number: ");
    scanf("%d", &N);
    for (i = 1; i <= N; ++i)
    {
        printf("%d ", (2 * i));
    }
    return 0;
}