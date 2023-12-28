//bismillah
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>>a(5,vector<int>(5,0));
    
    int x=-1,y=-1;
 
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            int val;
            cin>>val;
            if( val == 1)
            {
                x=i;
                y=j;
                break;
            }
        }
        if(x != -1)break;
    }
    
 
    cout<< abs(x-2)+abs(y-2);
 
    return 0;
}