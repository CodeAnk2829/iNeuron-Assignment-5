// Program to print first N Even natural numbers in reverse order
#include <stdio.h>
int main()
{
    int N, i;
    printf("Enter a number: ");
    scanf("%d", &N);
    for (i = N; i; --i)
    {
        printf("%d ", (2 * i));
    }
    return 0;
}