//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    while(k--){
        
        int m = n%10;
        
        if(m == 0)
            n = n/10;
        else
            n = n-1;
    }
    
    cout<<n;
    return 0;
}