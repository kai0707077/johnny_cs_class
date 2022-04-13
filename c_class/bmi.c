# include <stdio.h>

int main(){
    float hight;
    float weight;
    float bmi_value;

    printf("輸入您的身高(公尺)：");
    scanf("%f", &hight);    

    printf("輸入您的體重(公斤)：");
    scanf("%f", &weight);

    bmi_value = weight/hight/hight;
    
    if(bmi_value > 25){
        printf("您的BMI是 %.1f\n", bmi_value);
        printf("該減肥了，死胖子!\n");            
    }
    else if(bmi_value < 16){
        printf("您的BMI是 %.1f\n", bmi_value);
        printf("多吃點，死乞丐!\n");            
    }
    else{
        printf("您的BMI是 %.1f\n", bmi_value);
        printf("BMI正常!\n");   
    }

    
}