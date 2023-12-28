//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
        
        int k,n,w;
        cin>>k>>n>>w;
        //n = amount he has
        
        int moneyReq = k*(w*(w+1))/2;
        
        if(n > moneyReq)
            cout<<0;
        else
            cout<<moneyReq-n;
        
        
    }
    return 0;
}