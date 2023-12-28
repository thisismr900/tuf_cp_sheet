//Bismillahir Rahmanir Raheem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){

        string x;
        cin>>x;

        int totalChar =0;

        //create list of boring houses
        vector<string>boringHouses;
        bool call=false;
        for(int i=1;i<=9;i++){
            string house ="";
            for(int j=1; j<=4; j++){
                house.push_back(i+'0');
                totalChar+= house.size();
                if(house == x){
                    call = true;
                    break;
                }
            }
            if(call)
                break;
        }

        cout<<totalChar<<endl;




    }
    return 0;
}