#include<stdio.h>

int main(){
    long num;
    int i=1,c;
    printf("Enter a number: ");
    scanf("%ld", &num);
    
    while(i<num){
        c=i*i*i;
        if(c==num)
            break;
        i++;
    }
    if(c==num)
        printf("%ld is a cubic number %d", num,i);
    else
        printf("%ld is not a cubic number", num);
    return 0;
}