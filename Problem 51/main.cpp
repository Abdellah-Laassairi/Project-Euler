#include<bits/stdc++.h>
#define M 140000
#define ull unsigned long long int

using namespace std;
void SwapValue(int *a, int *b) {
   int *t = a;
   *a = *b;
   *b = *t;
}
int decimalToBinary(int N)
{

    ull B_Number = 0;
    int cnt = 0;
    while (N != 0) {
        int rem = N % 2;
        ull c = pow(10, cnt)+0.1;
        B_Number += rem * c;
        N /= 2;
          cnt++;
    }

    return B_Number;
}

bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

int main()
{
    int a=0;
    int p=0;
    int i=100001;
    int k=0;
    int j=0;
    int step[10];
    int carry=0;
    int v=1;
    int w=0;
    for(j=0; j<10;j++){
                step[j]=decimalToBinary(pow(2,v)+pow(2,w));
                w++;

    if(w>=v){
    SwapValue(&w,&a);
    v++;
    }}
    int prime=100001;
    while(p<8){
            while(i<M){
            if(carry>2){carry=0;i=prime+1;}
            if(!isPrime(i) && carry==0){i++;}
            if(isPrime(i) && isPrime(i+step[k])){
                    i=i+step[k];p++;prime=i+step[k] ;cout <<"step is "<<i<<"-"<<step[k]<< endl;
            }
            if(isPrime(i) && !isPrime(i+step[k])){carry++;i=i+step[k];prime=i;}

            }
            k++;
    }
    return 0;

}
