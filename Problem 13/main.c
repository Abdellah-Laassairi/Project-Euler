#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c=0;
    int T[150];
    char mot[150];
    printf("entrer le numero");
    gets(mot);
for(int i=0;i<150;i++){
    scanf("%d",&T[i]);
    c=c+T[i];
}
printf("%1d",c);
        return 0;
}
