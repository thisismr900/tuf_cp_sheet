//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
    
    int stops;
    cin>>stops;
    
    int maxi=0; //maxPassenger
    int prev = 0; //prevPassenger
    
    for(int i=1; i<=stops; i++){
        int a,b;
        cin>>a>>b;

        int curr = prev + (b-a);
        prev = curr;
        maxi = max(maxi, curr);
    }
    
    cout<<maxi;
    }
    return 0;
}