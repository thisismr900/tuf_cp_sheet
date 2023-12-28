//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string str;
        cin>>str;
        
        int roomsVisited=n;

        for(int i=0; i<size(str); i++){
            if(str[i]=='1'){
                int s=i+1;
                int ans=max(2*s, 2*(n-s+1));
                roomsVisited= max(ans,roomsVisited);
            }
        }
        cout<<roomsVisited<<endl;
    }
    return 0;
}