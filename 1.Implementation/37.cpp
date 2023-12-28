//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;

        int mini = ceil(n/2.0);
        int maxi = n;
        int move = -1;

        for(int i=mini; i<=maxi; i++){
            if( i%m == 0 ){
                move =i;
                break;
            }
        } 
        cout<<move;
    }
    return 0;
}