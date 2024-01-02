#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#include<bits/stdc++.h>
using namespace std;
/****************************************************************/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll testcases = 1;
    // cin>>testcases;
    while(testcases--){
        ll s,m,z;
        cin>>s>>m>>z;

        ll coco_with_s, coco_with_m;
        coco_with_s = s/z;
        coco_with_m = m/z;
        ll total = coco_with_m + coco_with_s;

        ll rem_money_s = s - (z*coco_with_s);
        ll rem_money_m = m - (z*coco_with_m);
        ll minChange = 0;
        if(rem_money_m + rem_money_s >= z){
          minChange = z-max(rem_money_m, rem_money_s);
          total++;
        }

        cout<<total<<" "<<minChange;
        


        
    }
    return 0;
}


