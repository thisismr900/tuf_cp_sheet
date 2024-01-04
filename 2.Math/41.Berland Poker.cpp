//Bismillahir Rahmanir Raheem
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#include<bits/stdc++.h>
using namespace std;
/***************************************************************
logic:

n -cards  m-jokers   k-players
n%k = 0
player pi has max jokers -> wins ->point = x-y; x=joker with pi ;y= max joker other than pi

n=8 m=3  k=2
p1: j1 j2 c6
p2: j3 

n=4 m=2  k=4
p1: j1 j2   pts=2-0=2         OR j1 pts = 0; 
p2:                              j2 pts = 0;


n=9 m=6  k=3
p1: j1 j2 j3   pts=0           OR  j1 j2 pts=0    oR   j1 j2 j3 pts=3-2=1            
p2: j4 j5 j6   pts=0               j3 j4 pts=0         j4 j5    pts = 2-3=-1
p3:            pts=0               j5 j6 pts=0         j6       pts - 1-3=-2

OR
p1: j1 j2 j3 j4 j5 j6 pts = 6-0=6 
p2: 
p3:

obs: max point is when a single player has all the joker cards

n=42 m=0  k=7
p1:    pts=0
p2:    pts=0
p3:    pts=0

*****************************************************************/



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // ll testcases;
    // cin>>testcases;
    // while(testcases--){
    //     double cards, jokers ,players;
    //     double cardsWithEachPlayer = cards/players;
    //     if(cardsWithEachPlayer >= jokers){
    //       cout<<jokers<<"\n";
    //     }
    //     else{
    //       double remJokers = jokers - cardsWithEachPlayer;
    //       double maxJokerWithOthers = ceil((1.0)*remJokers/(players-1));
    //       cout<<cardsWithEachPlayer-maxJokerWithOthers<<"\n";
    //     }

        
    // }
     ll t,n,m,k;
   cin>>t;
   while(t--){
       cin>>n>>m>>k;
       ll c=n/k;
       if(c>=m) cout<<m<<endl;
       else{
           ll rem=m-c;
           ll other=ceil(1.0*rem/(k-1));
           cout<<c-other<<endl;
       }
   }

    return 0;
}


