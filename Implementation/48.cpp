//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int>&a, pair<int,int>&b){
    return (a.first<b.first);
}

int main()
{
    int t=1;
    // cin>>t;
    while(t--){
        int n,k,b;
        cin>>n>>k;
        vector<pair<int,int>>v;
        for(int i=0; i<n; i++){
            cin>>b;
            v.push_back({b,i+1});
        }
        sort(begin(v),end(v));
        int days=0,cnt=0;
        vector<int>indices;
        for(int i=0; i<n; i++){
            days+=v[i].first;
            if(days<=k){
                cnt++; //instrument learnt
                indices.push_back(v[i].second);
            }
            else 
                break;
        }

        cout<<cnt<<endl;
        for(auto i:indices){
            cout<<i<<" ";
        }

    }
    return 0;
}