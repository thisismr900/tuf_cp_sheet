//Bismillahir Rahmanir Raheem
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#include<bits/stdc++.h>
using namespace std;

bool isBurgerPossible(ll h,ll nb,ll ns,ll nc,ll pb,ll ps,ll pc,ll moneyHeHas,ll cntB,ll cntS, ll cntC)
{
  ll reqB = (h)*(cntB);
  ll reqS = (h)*(cntS);
  ll reqC = (h)*(cntC);
  ll costB=0, costS=0, costC=0, totalCost = 0;
  
  if(nb < reqB)
    costB = (reqB-nb)*pb;
  totalCost+= costB;
  if(totalCost > moneyHeHas)return false;
  
  if(ns < reqS)
    costS = (reqS-ns)*ps;
  totalCost+= costS;
  if(totalCost > moneyHeHas)return false;
  
  if(nc < reqC)
    costC = (reqC-nc)*pc;
  totalCost+= costC;
  if(totalCost > moneyHeHas)return false;
  
  return true;//can make h hamburgers
  
}



int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    
  ll nb,ns,nc;
  string s ;
  ll pb,ps,pc;
  ll r; 
  ll cntB=0;
  ll cntS=0;
  ll cntC=0;
  
  cin>>s;
  cin>>nb>>ns>>nc;
  cin>>pb>>ps>>pc;
  cin>>r;
    
  for(int i=0; i<s.size(); i++){
    if(s[i]=='B')
      cntB++;
    else if(s[i]=='S')
      cntS++;
    else cntC++;
  }
    
    
  ll left = 0; // l is good, he can make 0 hamburgers
  ll right = 1e13; //r is bad-> can't create that many hamburgers
  //can improve r????NOOOOOO
  ll mid;
  while(left+1<right){
    mid = left+(right-left)/2;
    if(isBurgerPossible(mid,nb,ns,nc,pb,ps,pc,r,cntB,cntS,cntC))
      left = mid;
    else 
      right = mid;
  }
  cout<<left;
  return 0;
}


