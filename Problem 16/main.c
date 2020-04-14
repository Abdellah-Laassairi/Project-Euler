#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
long long int c=0,d=0, a=pow(2,80);
while(a>0){d=a%10;a=a/10;c=d+c;};
printf("%lld",c);
return 0;
}
