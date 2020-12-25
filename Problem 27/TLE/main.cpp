#include <iostream>
#include <cmath>
#define GM 398600.8
# define M_PI 3.14159265358979323846
using namespace std;
/*
1 25544U 98067A   20312.93274306  .00001101  00000-0  27781-4 0  9994
2 25544  51.6471 357.1945 0001957  93.0945 269.7966 15.49392855254302
*/
long double orbit(long double n){
    long double altitude, base, d,denom;
    long double p=0.333333333333;
    long double c=0.666666666666;


    base=pow(GM,p);
    d=(long double)(2*M_PI*n)/(86400);
    denom=pow(d,c);

    altitude=(long double)base/denom;

    return altitude;

}
int main()
{
    cout <<"Altitude is :"<< orbit(93641)<< " km"<<endl;

    return 0;
}
