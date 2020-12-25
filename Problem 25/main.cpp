#include<bits/stdc++.h>
using namespace std;
string findSum(string str1, string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);
    string str = "";
    int n1 = str1.length(), n2 = str2.length();
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());
    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
          carry = sum/10;
    }
    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }
    if (carry)
        str.push_back(carry+'0');

    reverse(str.begin(), str.end());
    return str;
}



string feb(int n){
string fib1="1";
string fib2="1";
string fib;
fib1=fib2="1";
   while(n-2!=0){
fib=findSum(fib1,fib2);
fib1=fib2;
fib2=fib;
n--;
}
return fib;
}

int main()
{
    int i=4500;
    while(i<5000){i++;cout<<i<<"-"<<"-"<<feb(i).length()<<endl;
}
    return 0;
}
