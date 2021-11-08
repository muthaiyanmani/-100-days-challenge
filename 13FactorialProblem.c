#include<stdio.h>

long getInput(){
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

long factorial(int n){
    long result=1;
    for(n;n>1;n--)
        result*=n;
    return result;
}

int main(){
    int rem,sum=0;
    long num;
    num=getInput();

    while(num>0){
        rem=num%10;
        sum+=factorial(rem);
        num/=10;
    }
    printf("Answer is : %ld",sum);
    return 0;
}