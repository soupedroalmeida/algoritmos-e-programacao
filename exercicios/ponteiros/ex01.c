#include <stdio.h>

void turnFactorial(int *n){
    int temp = *n;
    while (temp > 1){
        temp--;
        *n *= temp;
    }

}
 
int main(){
    int n;
    printf("input a number to output its factorial: ");
    scanf("%d", &n);
    turnFactorial(&n);
    printf("factorial: %d\n", n);


    return 0;
}
 