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

        vector<int>days(7);
        int pagesRead=0;
        for(int i=0; i<7; i++)
            cin>>days[i];

        int d=0;
        while(n>=0){
            n-= days[d];
            if(n<=0)break;
            d++;
            d = d % 7;
        }
        cout<<d+1;
    }
    return 0;
}