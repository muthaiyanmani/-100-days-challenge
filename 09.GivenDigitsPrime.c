#include<stdio.h>

int getInput(){
    long num;
    while(1){
        printf("Enter a 5 digit number: ");
        scanf("%ld", &num);
        if(10000<=num && num<=99999)
            break;
        printf("Invalid input.\n");
    }
    return num;
}

int main(){
    int m,count=0;
    long num = getInput();

    while(num>0){
        m=num%10;
        if(m==2 || m==3 || m==5 || m==7)
            count++;
        num=num/10;        
    }
    printf("%d", count);
    return 0;
}