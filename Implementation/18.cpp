//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
        
        string s;
        cin>>s;
        
        if(s[0]>='a' && s[0]<= 'z')
            s[0] -= 97-65; 
    
        cout<<s;
    }

    return 0;
}