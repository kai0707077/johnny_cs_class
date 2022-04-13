#include <stdio.h>

int main(void) {
    for(int i = 1; i < 10; i++) {
        for(int j = 2; j < 10; j++) {
            printf("%d*%d=%2d ", i, j, i * j);
        }
        puts("");
    }

    return 0;
}