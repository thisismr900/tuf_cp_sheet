//Bismillahir Rahmanir Raheem
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#include<bits/stdc++.h>
using namespace std;
/****************************************
LOGIC:

*****************************************/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll testcases;
    cin>>testcases;
    while(testcases--){
        ll w,h;
        cin>>w>>h;
        ll nw1,nw2,nh1,nh2;

        cin>>nw1;
        vector<ll>w1(nw1);
        for(ll i=0; i<nw1; i++)cin>>w1[i];

        cin>>nw2;
        vector<ll>w2(nw2);
        for(ll i=0; i<nw2; i++)cin>>w2[i];

        cin>>nh1;
        vector<ll>h1(nh1);
        for(ll i=0; i<nh1; i++)cin>>h1[i];

        cin>>nh2;
        vector<ll>h2(nh2);
        for(ll i=0; i<nh2; i++)cin>>h2[i];

        sort(begin(w1),end(w1));
        sort(begin(w2),end(w2));
        sort(begin(h1),end(h1));
        sort(begin(h2),end(h2));

        ll doubArea1 = (w1[nw1-1] - w1[0])*h;
        ll doubArea2 = (w2[nw2-1] - w2[0])*h;
        ll doubArea3 = (h1[nh1-1] - h1[0])*w;
        ll doubArea4 = (h2[nh2-1] - h2[0])*w;
        
        ll ans = max(doubArea1,max(doubArea2,max(doubArea3,doubArea4)));
        cout<<ans<<"\n";    
        
    }
    return 0;
}


