#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int main() {
    
    int HH,MM,h_add,m_add;
    char colon;

    if(!(cin>>HH>>colon>>MM)||colon!=':'){
        cout<<"use numbers only"<<endl;
        return 0;
    }
    if(!(cin>>h_add>>m_add)){
        cout<<"use numbers only"<<endl;
        return 0;
    }
    if(!(HH>=0 && HH<=23)){
        cout<<"Hour should be greater than or equal to 0 and less than or equal to 23 hours"<<endl;
        return 0;}
    if(!(MM>=0 && MM<=59)){
        cout<<"Minute should be greater than or equal to 0 and less than or equal to 59 minutes"<<endl;
        return 0;}
    if(!(h_add>=0 && h_add<=1000)){
        cout<<"h_add should be greater than or equal to 0 and less than or equal to 1000 hours"<<endl;
        return 0;}
    if(!(m_add>=0 && m_add<=10000)){
        cout<<"m_add should be greater than or equal to 0 and less than or equal to 10000 minutes"<<endl;
        return 0;}
    
    MM = MM + m_add;
    h_add=h_add+(MM/60);
    MM=MM%60;
    HH=HH+h_add;
    HH=HH%24;
    
    cout<<setfill('0')<<setw(2)<<HH<<":"<<setw(2)<<MM;

    return 0;
}
