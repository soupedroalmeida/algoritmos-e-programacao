#include <stdio.h>
#include <math.h>

float getArea(float a[], float b[], float c[]){
    float area, sizeA, sizeB, sizeC, s;
    sizeA = sqrt(pow(a[0] - b[0], 2) + pow(a[1] - b[1], 2));
    sizeB = sqrt(pow(b[0] - c[0], 2) + pow(b[1] - c[1], 2));
    sizeC = sqrt(pow(c[0] - a[0], 2) + pow(c[1] - a[1], 2));

    s = (sizeA + sizeB + sizeC) / 2;

    area = sqrt(s * (s - sizeA) * (s - sizeB) * (s - sizeC));

    return area;
}

int main(){
    float a[2], b[2], c[2], area;

    printf("input the first coordinate x and y: ");
    scanf("%f %f", a, a + 1);
    printf("input the second coordinate x and y: ");
    scanf("%f %f", b, b + 1);
    printf("input the third coordinate x and y: ");
    scanf("%f %f", c, c + 1);

    area = getArea(a, b, c);
    printf("area: %.4f\n", area);

    return 0;
}