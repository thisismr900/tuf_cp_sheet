//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;

    while(t--){
        int n;
        cin>>n;
        
        bool easy = true;
        vector<int>type(n);
        for(int i=0;i<n;i++){
            cin>>type[i];
            if(type[i] == 1)
            {
                easy = false;
                break;
            }
        }
        
        if(easy)
            cout<<"EasY";
        else
            cout<<"HarD";
    }
    return 0;
}