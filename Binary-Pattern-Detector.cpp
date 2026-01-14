#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if(cin>>t){
        while(t--){
            string s;
            cin>>s;
            
            if(s.find("11")!=string::npos){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }       
            }
        }
    return 0;
}
