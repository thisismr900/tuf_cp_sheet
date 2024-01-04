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
DIV BY 60=2*2*3*5 
THEN MUST BE DIV BY 4,3,5
    obs: last digit :0
         count of even >1 (including the last digit 0)

*****************************************/

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll testcases;
    cin>>testcases;
    while(testcases--){
        // cout<<"testcase:"<<testcases<<endl;
        string s ;
        cin>>s; //numero string
        // cout<<"s: "<<s<<endl;
        int sum = 0,cntEven=0,cnt0=0;

        //find sum of digits
        for(auto c:s){
          sum+=c-'0';
          if(c=='0')
            cnt0++;

          if((c-'0')%2==0)
            cntEven++;
        }
        if(cnt0==0 || sum % 3!=0 || (cntEven-1)==0)
        {
          cout<<"cyan\n";
          // continue;
        }
        else 
          cout<<"red\n";
    }
    return 0;
}


