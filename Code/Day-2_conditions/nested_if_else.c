#include<stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if(tk >= 100){
        printf("burger khabo\n");
        if(tk>=500){
            printf("biriyani khabo");
        }else{
            printf("bari jabo");
        }
    }else if (tk >= 50){
        printf("Fuska khabo");
    }else{
        printf("cha khabo");
    }
}