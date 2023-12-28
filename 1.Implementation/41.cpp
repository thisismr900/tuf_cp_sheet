//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
        int n,x,y;
        cin>>n>>x>>y;
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        //10  2  2
        //n   x  y
//        10  9  6  7  8  3  2  1  4  5
//        d1  d2 d3 d4 d5 d6 d7 d8 d9 d10

    
    for(int d=0; d<n; d++){
        bool flag = true;
        for(int k =d-1; k>=d-x && k>=0 && flag; k--)
        {
            if( a[d]>= a[k] )//not a valid day
            {
                flag=false;
                break;
            }
        }
        if(flag==false) //no need to check for next y days
            continue;

        for(int k=d+1; k<=d+y && k<n && flag; k++){
            if( a[d] >= a[k] ){ //not a valid day
                flag=false;
                break;
            }
        }

        if(flag){
            cout<<d+1;
            return 0;
        }
        }

    }

    
    return 0; //dummy return
}