#include <bits/stdc++.h>
using namespace std;
int * SieveOfSundaram(int m) {
    int N= (m-2)/2;
    int j=0;
    int * primes=new int[N];
    bool marked[N+1]={false};
    for (int i=1; i<=N; i++)
        for (int j=i; (i + j + 2*i*j) <= N; j++)
            marked[i + j + 2*i*j] = true;
    if (m > 2)
        //cout << 2 << " ";
    for (int i=1; i<=N; i++)
        if (marked[i] == false) {
            primes[j] = 2 * i + 1;
            j++;
            //cout << 2 * i + 1 << " ";
        }

    return primes;
}
int main() {
    int sum=0;
    int *primes=SieveOfSundaram(pow(10,6));
    for(int j=0; j<primes.;j++){
        sum+=primes[j];
    }
    cout<<endl<<primes[0;
    return 0;
}
