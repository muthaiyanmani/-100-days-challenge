#include<stdio.h>
#include<stdbool.h>

bool isPrime(int n){
    short count=0;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count==0)
        return true;
    else
        return false;
}

int main(){
    int num,number,i,smaller,bigger;
    printf("Enter a number: ");
    scanf("%d", &number);
    num=number;
    
    //smallest
    if(isPrime(number))
        num=number-1;
    for(i=num;i>1;i--)
        if(isPrime(i)){
            smaller=i;
            break;
        }    

    //biggest
    if(isPrime(number))
        num=number+1;
    for(i=num;i<=num*2;i++)
        if(isPrime(i)){
            bigger=i;
            break;
        }
    //display
    if(bigger-number > number-smaller)
        printf("%d is the nearest prime number", smaller);
    else if(bigger-number == number-smaller)
        printf("%d and %d is the nearest prime number", smaller, bigger);
    else
        printf("%d is the nearest prime number", bigger);
    return 0;
}