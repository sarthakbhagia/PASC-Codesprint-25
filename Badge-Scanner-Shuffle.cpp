#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
     int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
     int odd_badge_id=0;
         for(int i=0;i<n;++i){
             int current_id;
             cin>>current_id;
             odd_badge_id^=current_id;   
         }
    cout<<odd_badge_id<<endl;
     }   
     
    return 0;
}
