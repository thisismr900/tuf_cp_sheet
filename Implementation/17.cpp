//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
        
        string userName;
        cin>>userName;
        
        set<char>st;
        
        for(int i=0; i<userName.size(); i++){
            st.insert(userName[i]);
        }
        
        if(st.size() & 1 == 1)//odd
            cout<<"IGNORE HIM!";
        else 
            cout<<"CHAT WITH HER!";
        
    }
    return 0;
}