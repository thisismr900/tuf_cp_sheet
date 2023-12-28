#define MOD 1000000007
#define ll long long
#include<bits/stdc++.h>
using namespace std;
int LCM(int a, int b) 
{ 
    int greater = max(a, b); 
    int smallest = min(a, b); 
    for (int i = greater; ; i += greater) { 
        if (i % smallest  == 0) 
            return i; 
    } 
} 
int main()
{
    int tt;
    cin>>tt;
    while(tt--){
        int l,r;
        cin>>l>>r;
        int x = l;
        int y = x*2;
        if(LCM(x,y)>r){
            x=-1;
            y=-1;
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}