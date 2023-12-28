//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
        string s,e;
        cin>>s>>e;

        int s1=stoi(s.substr(0,2));
        int s2=stoi(s.substr(3,2));
        int e1=stoi(e.substr(0,2));
        int e2=stoi(e.substr(3,2));

        int start = ( s1*60 ) + s2; //11:40 -> 700mins
        int end   = ( e1*60 ) + e2; //10:30 -> 742mins
        int mid = (start+end)/2; //721 mins

        int m1 = mid/60; //12 hr
        int m2= mid%60;  //1 min

        string ans="";
        if(m1<10)ans+='0';
        ans+=to_string(m1)+':';
        if(m2<10)ans+='0';
        ans+=to_string(m2);

        cout<<ans;
        
    }
    return 0;
}