#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;

int to_int(char s){
    return (int)s-48;
}

int main() {
    string c;
    int solution=1;
    for(int i=0;i<pow(10,6);i++){
        c+=to_string(i);
    }
    for(int j=0;j<=6;j++)
        solution*=to_int(c[pow(10,j)]);

    cout<<solution;
    return 0;
}
