#include <stdio.h>

void swapNums(int *a, int *b, int *c){
    int temp;
    temp = *c;
    *c = *b;
    *b = *a;
    *a = temp;
}
 
int main(){
    int a, b, c;

    printf("input three numbers to be swapped: ");
    scanf("%d %d %d", &a, &b, &c);
    swapNums(&a, &b, &c);
    printf("swapped numbers: a = %d, b = %d, c = %d\n", a, b, c);

    return 0;
}
 