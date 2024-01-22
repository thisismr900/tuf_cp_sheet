//Bismillahir Rahmanir Raheem
#define MOD 1000000007
#define ll long long
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

#include<bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;cin>>n;
    vector<string> currentPath;
    while(n--){
      string cmd;
      cin>>cmd;
      
      if(cmd == "pwd"){
        //print current directory path
        cout<<"/";
        for (int i = 0; i < currentPath.size(); i++) {
          cout<< currentPath[i]<<"/";
        }
        cout<<"\n";
      }
      else{
       // cmd = "cd"
       
       string path ;
       cin>>path;
      // path.push_back('/');
       string temp="";
      if(path[0]=='/')//absolute path
      {
        currentPath.clear();
      }
       for(int i=0; i<path.size(); i++){
         if(path[i]=='/'){
           if(temp.size()>0){
             currentPath.push_back(temp);
             temp="";
           }
         }
         else if(path[i]=='.'){
           currentPath.pop_back();
           i++;
         }
         else{
           temp+=path[i];
         }
       }
       if(temp.size()>0){
        currentPath.push_back(temp);
        temp="";
       }
       
       
       
       
      }
    }
    return 0;
}

 