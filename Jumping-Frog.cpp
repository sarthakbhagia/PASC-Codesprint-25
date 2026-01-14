#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
long long frog(int n){
        if(n<=0){
            return 0;
        }
        if(n==1){
            return 1;
        }
     long long a=1;
     long long b=2;
     long long result=0;
        
        for(int i=3;i<=n;++i){
            result=a+b;
            a=b;
             b=result;
    }
         return b;
    }
int main(){
    int n;
    if(!(cin>>n)){
        return 1;
    }
    long long ways = frog(n);
    cout<<ways<<"\n";
    return 0;
}
