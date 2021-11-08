#include<stdio.h>

int main(){
    int a=5,b=3,k=3,number1;
    number1=a;

    for(int i=1;i<=k;i++){
        if(i%3==0){
            number1=number1>>2;
        }else{
            number1=number1<<3;
        }
        printf("i=%d number1=%d\n",i,number1);
    }
    return 0;
}