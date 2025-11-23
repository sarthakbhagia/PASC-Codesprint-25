#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int HH,MM,hourincrement,minuteincrement;
    char colon=':';

    cin>>HH>>colon>>MM;
  
    cin>>hourincrement>>minuteincrement;
 
    MM = MM + minuteincrement;
    
    hourincrement+=(MM/60);
    MM=MM%60;
    HH=HH+hourincrement;
    HH=HH%24;
    cout<<HH<<":"<<MM;
 
    
    return 0;
}
