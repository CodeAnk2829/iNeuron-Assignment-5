// Program to print first N natural numbers in reverse order
#include <stdio.h>
int main(){
    int N, i;
    printf("Enter a number: ");
    scanf("%d", &N);
    for(i = N ; i ; --i){
        printf("%d ", i);
    }
    return 0;
}