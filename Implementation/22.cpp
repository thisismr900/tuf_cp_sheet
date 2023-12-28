//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=1;
    // cin>>t;
    while(t--){
        
        string card;//card on table
        vector<string>myCards(5);
        
        bool canPlay=false;
        cin>>card;
        
        for(int i=0;i<5; i++){
            cin>>myCards[i];
            if(myCards[i][0] == card[0] || myCards[i][1] == card[1]){
                canPlay = true;
                break;
            }
        }
        if(canPlay)
            cout<<"YES";
        else 
            cout<<"NO";
            
        
    }
    return 0;
}