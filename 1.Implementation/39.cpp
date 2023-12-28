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

        //corner case
        if(size(s)==1){
            if(islower(s[0])){
                cout<<(char)(s[0]-32);
            }
            else cout<<(char)(s[0]+32);
            return 0;
        }

        bool flag = true;
        for(int i=1; i<size(s); i++){
            if( islower(s[i]) ){
                flag = false; //NO need to change
                break;
            }
        }

        if(!flag){
            cout<<s;
            return 0;
        }

        //make changes in s
        if(islower(s[0]))s[0]-=32;
        else s[0]+=32;

        for(int i=1; i<size(s); i++){
            s[i]+=32;
        }

        cout<<s;
    }
    return 0;
}