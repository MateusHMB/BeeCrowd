#include <stdio.h>
#include <stdlib.h>
int main(void){
    float *ptr;
    ptr = malloc(sizeof(float));
    *ptr = 3.14;
    printf("%f\n", *ptr);
    float *ptr2 = ptr;
    *ptr2 = 6.66;
    printf("%f\n", *ptr);
    return 0;

}
