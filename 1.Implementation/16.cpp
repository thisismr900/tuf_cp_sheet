//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
        int l,b;
        cin>>l>>b;
        
        int years = 0;
        while(l<=b){
            years++;
            l *= 3;
            b *= 2;
        }
        cout<<years;
    }
    return 0;
}