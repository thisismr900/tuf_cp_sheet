#include<bits/stdc++.h>
using namespace std;
bool isDiverse(string s)
{
    int n = s.size();
    map<char,int>mp;
    for(auto c:s){
        mp[c]++;
    }
    for(auto i:mp){
        if(i.second > n/2)
            return false;
    }
    return true;
}
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        for(int i=0; i<n; i++){
            string subStr ="";
            for(int j=i; j<n; j++){
                subStr+=s[j];
                if(isDiverse(subStr)){
                    cout<<"YES"<<endl<<subStr;
                    return 0;
                }
            }
        }
        cout<<"NO";
    }
    return 0;
}