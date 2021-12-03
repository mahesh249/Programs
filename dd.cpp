#include<bits/stdc++.h>
#define ll long long
#define M 1000000007
using namespace std;
int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  srand(chrono::high_resolution_clock::now().time_since_epoch().count());
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    set<char>se;
    for(auto x:s)
      se.insert(x);
    if(se.size()==1){
      cout<<"Bob\n";
      continue;
    }
    int c=0;
    for(int i=0;i<s.size()-1;i++){
      if(s[i]!=s[i+1]){
        c++;
      }
    }
    if(c%3==0){
      cout<<"Bob\n";
    }
    else{
      cout<<"Alice\n";
    }
  }
   
  return 0;
}
