#include <stdio.h>
void maior(int A, int B, int C) {
    if (A <= B && B <= C) {
        printf("%d %d %d", A, B, C);
    } else if (A <= C && C <= B) {
        printf("%d %d %d", A, C, B);
    } else if (B <= A && A <= C) {
        printf("%d %d %d", B, A, C);
    } else if (B <= C && C <= A) {
        printf("%d %d %d", B, C, A);
    }
    } else if (C <= B && B <= A) {
        printf("%d %d %d", C, B, A);
    }
}

int main(void){
    int x, y, z;
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);
    maior(x,y,z);
    return 0;
}

