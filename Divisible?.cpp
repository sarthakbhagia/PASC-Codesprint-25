#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,i;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans=k,evens=0;
        
        for(i=0;i<n;i++){
            int x;
            cin>>x;
            if(x%2==0)
                evens++;
            ans=min(ans,(k-x%k)%k);
        }
    if(k==4)
        ans=min(ans,max(0,2-evens));
    cout<<ans<<endl;}
    return 0;
}
