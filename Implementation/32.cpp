//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
        int k;
        cin>>k;
        string s;
        cin>>s;

        map<char,int>mp;
        for(int i=0; i<s.size(); i++)
            mp[s[i]]++;
        
        for(auto i:mp){
            if( (i.second % k) !=0 ){
                cout<<-1;
                return 0;
            }
        }

        string subString="";
        for(auto i:mp){
            int freq = (i.second)/k;
            for(int j=1; j<=freq; j++){
                subString+=i.first;
            }
        }

        for(int i=1;i<=k;i++)
            cout<<subString;
                

    }
    return 0;
}