//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
        int n;
        cin>>n;
        pair<int,int>ab={-1,-1}; //{fours,sevens}
        int a,b;//a=no of 4's, b=no of 7's

        for(b= n/7; b>=0; b--){
            if( (n-(7*b))%4 == 0 )
            {
                a=(n-(7*b))/4;
                if(a+b < ab.first+ab.second || ab.first == -1)
                {
                    ab.first=a;
                    ab.second=b;
                }
            }
        }

        if(ab.first != -1 ){
            for(int i=1; i<=ab.first; i++) cout<<4;
            for(int i=1; i<=ab.second; i++) cout<<7;
        }
        else
            cout<<-1;
    }
    return 0;
}