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
    
    ll testcases;
    cin>>testcases;
    while(testcases--){
      int x, y;
	cin >> x >> y;
	
	if (x > 3) puts("YES");
	else if (x == 1) puts(y == 1 ? "YES" : "NO");
	else puts(y <= 3 ? "YES" : "NO");

        
    }
    return 0;
}


