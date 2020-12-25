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

string convertToString(char a, int size)
{
    int i;
    string s = "";
        s = a;
    return s;
}

int main()
{
    string res="0";
    string c[100];
    for(int j=0;j<100;j++){
        cin>>c[j];
    }
    cout<<"res"<<endl;
    for(int i=0;i<100;i++){ res=findSum(c[i],res);}
    cout<<setw(5)<<res<< endl;
    return 0;
}
