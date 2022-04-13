#include <stdio.h>

# define len = 5; //城市內會用到的參數

int main(void) {
    int a[len]={1, 2, 3, 4, 5};

    for(int i=0; i<5; i++){
        printf("%d\n", a[i]);
    }
    

    return 0;
}