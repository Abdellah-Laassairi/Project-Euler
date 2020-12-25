#include <stdio.h>
#include <stdlib.h>
void funv(int a){
a++;
}
void fun(int *a){
*a=*a+1;
}
int main()
{
    int a=5;
    printf("before %d \n",a);
    funv(a);
    printf("after %d \n",a);
    return 0;
}
