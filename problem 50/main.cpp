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
int * SieveOfSundaram(int n) {
    int d = 0;
    int *primes = new int[];
    // In general Sieve of Sundaram, produces primes smaller
    // than (2*x + 2) for a number given number x.
    // Since we want primes smaller than n, we reduce n to half
    int nNew = (n - 1) / 2;

    // This array is used to separate numbers of the form i+j+2ij
    // from others where  1 <= i <= j
    bool marked[nNew + 1];

    // Initialize all elements as not marked
    memset(marked, false, sizeof(marked));

    // Main logic of Sundaram.  Mark all numbers of the
    // form i + j + 2ij as true where 1 <= i <= j
    for (int i = 1; i <= nNew; i++)
        for (int j = i; (i + j + 2 * i * j) <= nNew; j++)
            marked[i + j + 2 * i * j] = true;

    // Since 2 is a prime number
    if (n > 2)
        cout << 2 << " ";

    // Print other primes. Remaining primes are of the form
    // 2*i + 1 such that marked[i] is false.
    for (int i = 1; i <= nNew; i++)
        if (marked[i] == false) {
            cout << 2 * i + 1 << " ";
            primes[d];
            d++;
        }

    return primes;
}
int main() {
    int sum;
    int oldsum=0;
    int sumlen=0;
    int sumlenold=0;
    int *primes=SieveOfSundaram(pow(10,6));
    for(int j=0; j<pow(10,4);j++){
        sum+=primes[j];
        sumlen++;
        if(sum>oldsum && sum<pow(10,6)){
            oldsum=sum;
            sumlenold=sumlen;
        }

    }
    cout<<endl<<primes[0];
    return 0;
}
