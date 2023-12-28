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
        
        // if(n==0){
        //     cout<<0;
        //     return 0;
        // }
        
        int remCubes = n;
        int currHeight = 1;
        
        while(true){
            int cubes_in_curr_height = (currHeight*(currHeight+1))/2;
            if(remCubes >= cubes_in_curr_height){
                currHeight++;
                remCubes -= cubes_in_curr_height;
            }
            else break;
        }
        cout<<currHeight-1;
        
        
        
        
        
        
        
    }
    return 0;
}