//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
        
        string s;
        cin>>s;
        
        vector<int>nums;
        
        for(int i=0; i<s.size(); i++){
            if(s[i]!='+')
                nums.push_back(s[i]-'0');
        }
        sort(nums.begin(),nums.end());
        

        for(int i=0; i<nums.size(); i++){
            if(i < nums.size()-1)
                cout<<nums[i]<<"+";
            else 
                cout<<nums[i];
        }
                
    }
    return 0;
}