#include<stdio.h>

int main(){
    int num,count=0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(int i=2;i<=num/2;i++){
        if(num%i==0)
            if(i%2==0){
                printf(" %d ",i);
                count++;
            }
    }
    printf("\nThe answer is :: %d",count);
    return 0;
}