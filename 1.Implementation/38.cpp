//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int portal(int i,vector<int>a,int n){
    if(i==n)
        return -1;
    return i+a[i];
}
int main()
{
    int c=1;
    // cin>>t;
    while(c--){
        int n,t;
        cin>>n>>t;
        vector<int>a(n-1);
        for(int i=0; i<n-1; i++)
            cin>>a[i];
        //a1, a2, a3, a4, a5,  ....... an-1
        //0,  1,  2,   3,  4,  ....... n-2
        
        int curr = 0;
        if(t>n){
            cout<<"NO";
            return 0;
        }
        while(true){
            //check if current cell is target
            if(curr == t-1){
                cout<<"YES";
                return 0;
            }
            if(curr > t-1){
                cout<<"NO";
                return 0;
            }
            //go to next cell via portal
            curr = curr + a[curr];
        }

    }
    return 0;
}