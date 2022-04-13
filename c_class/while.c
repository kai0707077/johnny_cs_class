#include <stdio.h>

int main(void) {
    for(int i = 0; i < 5; i++) {
        printf("十倍界王拳!!\n");
    }

    int a=0;
    while(a<5){
        a++;
        printf("五倍界王拳!!\n");
    }


    return 0;
}

// while 可以但是 for 做不到的情況
// int x=0;
// while(x){
//     x = func_detect_bitch(); // 如果偵測到 bitch 會回傳 1 否則回傳 0
//     if(x==1){break;}
//     trun_direction();
// }
// // 執行反制 bitch 的工作