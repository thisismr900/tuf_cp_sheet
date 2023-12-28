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

        if(m%n!=0){
            cout<<-1;
            return 0;
        }
        int k=m/n;
        int moves = 0;

        while(k%3==0){
            k/= 3;
            moves++;
        }
        while(k%2==0){
            k/= 2;
            moves++;
        }
        if(k!=1)
            cout<<-1;
        else
            cout<<moves;
        
    }
    return 0;
}