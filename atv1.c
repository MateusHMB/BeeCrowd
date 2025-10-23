#include <stdio.h>
int main(void){
    int x;
    int *ptr = &x;
    x = 22;
    printf("%d", *ptr);
}
