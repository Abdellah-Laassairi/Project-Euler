#include <bits/stdc++.h>
using namespace std;

inline bool IsPrime( int number )
{
 if ( ( (!(number & 1)) && number != 2 ) || (number < 2) || (number % 3 == 0 && number != 3) )
  return (false);

 for( int k = 1; 36*k*k-12*k < number;++k)
  if ( (number % (6*k+1) == 0) || (number % (6*k-1) == 0) )
   return (false);
  return true;
 }
int quadratic(int n, int a, int b){
    return (int)pow(n,2)+a*n+b;
}
int main()
{

    int n=1;
    int carry=0;
    int solution=0;

    for(int a=-1000;a<1000;a++){
        for(int b=-1000;b<1000;b++){
                if( IsPrime(b)) {
                    int n=0;
                    while(IsPrime(quadratic(n,a,b))){
                        n++;
                        //cout<<n<<" For a = " <<a<<" and b = "<<b<<"\n";
                    }if(n>carry)
                    {carry=n;
                    solution=a*b;
                    }
                }

        }
    }
    cout << solution<< endl;
    return 0;
}
