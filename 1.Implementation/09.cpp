//bismillah
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //take height inputs
    vector<int>height(n);
    for(int i=0;i<n;i++)
        cin>>height[i];
    

    //find indexes of min height and max height
    int mini,maxi;
    int minH=1000,maxH=-1;
    for(int i=0;i<n;i++)
    {
        if(height[i]<= minH)
        {
            mini=i;
            minH=height[i];
        }
        
        if(height[i]> maxH){
            maxi = i;
            maxH = height[i];
        }
    }
    
    int time=0;
    
    time+= (n-1)-(mini);
    time+= (maxi)-(0);
    
    if(mini<maxi)time--;
    
    cout<<time;
    
    return 0;
}