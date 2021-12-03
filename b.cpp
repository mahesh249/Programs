#include<bits/stdc++.h>
#define ll long long int
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
      int arr[n];
      //  set<int>s;

      for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]&1)
          odd.push_back(arr[i]);
        else
          even.push_back(arr[i]);
      }
       int c = n/2;
      sort(odd.begin(),odd.end());
      sort(even.begin(),even.end());
      if(odd.size()>even.size()){
        int mini_odd = odd[0];
      for(int i=1;i<odd.size() && c>0;i++){
         if(odd[i]!=mini_odd){
             cout<<odd[i]<<" "<<mini_odd<<"\n"; 
             c--;
         }
      }

      }
      else if(even.size()>1){
       int mini_odd = odd[0];
      for(int i=1;i<odd.size() && c>0;i++){
         if(odd[i]!=mini_odd){
             cout<<odd[i]<<" "<<mini_odd<<"\n"; 
             c--;
         }
      }
      }

    //     s.insert(arr[i]);
    //     }
    //   sort(arr,arr+n);
    //  // int maxi = arr[n-1];
    //  int c = n/2;
    //   for(int i=0;i<n-1;i++){
    //     if(s.find(arr[i+1]%arr[i])==s.end() && arr[i]!=arr[i+1] && c>0){
    //         cout<<arr[i+1]<<" "<<arr[i]<<"\n";
    //         c--;
    //     }
    //     if(i>=0 && i<n-2 && s.find(arr[i+2]%arr[i])==s.end() && arr[i]!=arr[i+2] && c>0){
    //       cout<<arr[i+2]<<" "<<arr[i]<<"\n";
    //       c--;
    //     }
    //     if(n-i-1>=3 &&  s.find(arr[n-1]%arr[i])==s.end() && arr[i]!=arr[n-1] && c>0 ){
    //        cout<<arr[n-1]<<" "<<arr[i]<<"\n";
    //       c--;
    //     }
    //   }
   }
    
  return 0;
}
