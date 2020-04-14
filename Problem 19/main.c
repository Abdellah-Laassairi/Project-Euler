 //Finally I did it.


#include <stdio.h>
#include <stdlib.h>
//2 ^ 1000
int main(){
/*{
int a,b,c;
    for(c=0;c<1000;c++){
    for(b=0;b<c;b++){
    for(a=0;a<b;a++){
    if((a*a+b*b==c*c) && a+b+c==1000)printf("%d",a*b*c);
    }
    }
    }
    return 0;*/
    int c,d,e;
    int t[20][20];
    int res[100][100][100];
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            scanf("%d",&t[i][j]);
        }
    }
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            c=t[i][j]*t[i][j+1]*t[i][j+2]*t[i][j+3];
            d=t[i][j]*t[i+1][j]*t[i+2][j]*t[i+3][j];
            e=t[i][j]*t[i+1][j+1]*t[i+2][j+2]*t[i+3][j+3];


        }
    }
printf("%d",d);
return 0;
}
