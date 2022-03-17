#include <stdio.h>
#include <time.h>

int main(void){
    int r = 0, i;

    srand(time(NULL));

    for (i = 0; i < 10; i++){
        // resto da divisao rand() / n vai de 0 a n, por isso +1
        printf("%d ", (rand() % 6) + 1);  
    }
    printf("\n");
    
    return 0;
}