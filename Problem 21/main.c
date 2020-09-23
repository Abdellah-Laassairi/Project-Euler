#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int divisors_sum(int a){
    int sum=0;
    int i=0;
    for(i=1; i<=a/2;i++){
        if(a%i==0){
            sum+=i;
        }
    }
    return sum;
};

int main()
{
    int sum=0;
    int i=0;
    int j=0;
    int table[2][10000];
    for(i=2;i<10000;i++){
        table[0][i]=i;
        table[1][i]=divisors_sum(i);
        //printf("%d divisors are :%d \n",i,table[1][i]);
    }
    for(i=2;i<10000;i++){
        for(j=2;j<10000;j++){
            if (table[1][i]==table[0][j] && table[0][i]==table[1][j] && i!=j){
                sum+=table[0][i];
                printf("%d is amicable with %d \n ",table[0][i],table[0][j]);
                break;

            }
        }
    }
    printf("number is %d",sum);
    return 0;
}
