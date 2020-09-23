#include <bits/stdc++.h>
using namespace std;

string to_binary(long int a){
    long int d=0;
    string s="";
    while(a>0){
        d=a%2;
        a=a/2;
        s+=to_string(d);
    }
    reverse(s.begin(),s.end());
    return s;
}

bool isPalindrome(string s){
    for(int i=0;i<=s.size()/2;i++){
        if(s[i]!=s[s.size()-1-i]){
            return false;
        }
    }
    return true;
}


int main()
{
    long int sum=0;
    cout<<to_binary(39993)<<endl;
    for(long int i=1;i<1000000;i=i+2){
        if(isPalindrome(to_string(i)) && isPalindrome(to_binary(i))) {
            cout << i << endl;
            sum += i;
        }
    }
    cout<<"sum is : "<<sum;
    return 0;
}
