/* Pedro Henrique Almeida de Paula - 333696
01/31/2022, Porto Alegre 

read the coordinates of two points and output their distance */

#include <stdio.h>
#include <math.h>

int main(void){
    float x1, x2, y1, y2;

    printf("\nType the coordinates (x, y) of the first point separated by a space: ");
    scanf("%f %f", &x1, &y1);

    printf("Type the coordinates (x, y) of the second point separated by a space: ");
    scanf("%f %f", &x2, &y2);

    printf("\nThe distance between the two points is: %.2f", sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)));

    return 0;
}