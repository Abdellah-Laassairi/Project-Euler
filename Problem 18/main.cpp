#include<bits/stdc++.h>
#define MAX 5000
using namespace std;


int main()
{
    int T[15][15];
    for(int i=0;i<15;i++){
            for(int j=0;j<15;j++){
    T[i][j]=0;
    }
    }
    int k=1;
    while(k<15){
    for(int i=0;i<15;i++){
            for(int j=0;j<k;j++){
    cin>>T[i][j];
    k++;
    }
    }
    }
    for(int i=0;i<15;i++){
            for(int j=0;j<15;j++){
    cout<<T[i][j]<<"-";
    }
    cout<<endl;
    }
    return 0;
}
