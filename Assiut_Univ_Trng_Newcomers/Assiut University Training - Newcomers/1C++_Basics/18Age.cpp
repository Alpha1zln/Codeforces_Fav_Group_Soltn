#include<bits/stdc++.h>
using namespace std;
 
int main() {
    
    int  a;
    cin >> a;
    int years=0, months=0, days=0;

    int tempA = a;
    
    while(a > 0) {
        if(a >= 365) {
            years = a/365;
            a = a%365;
        } 
        else if(a >= 30) {
            months = a/30;
            a = a%30;
        }
        else {
            days = a;
            a = 0;
        }
    }
    
    if(years == 0) {
        cout << 0 <<  " years" << endl;            
    }
    else {
        cout << years <<  " years" << endl;
    }
     
     
    if(months == 0) {
        cout << 0 <<  " months" << endl;            
    }
    else {
        cout << months <<  " months" << endl;
    }
    
    if(days == 0) {
        cout << 0 <<  " days" << endl;            
    }
    else {
        cout << days <<  " days" << endl;
    }
            

    
    return 0;
    
    
}