#include<bits/stdc++.h>
using namespace std;
 
int main() {
    
    float  a, b;
    cin >> a >> b ;
    
    // int ai = int(a)
    // int floor = int(a)/b;
    // int ceil = a%b==0 ? floor : floor+1;
    
    if(a==0 && b==0) {
         cout << "Origem" << endl;
    }
    else if(a==0) {
         cout << "Eixo Y" << endl;
    } else if(b == 0) {
        cout << "Eixo X" << endl;
    }
    else if(a>0 && b>0) {
        cout << "Q1" << endl;
    }
    else if(a<0 && b>0) {
        cout << "Q2" << endl;
    }
        else if(a<0 && b<0) {
        cout << "Q3" << endl;
    }
        else if(a>0 && b<0) {
        cout << "Q4" << endl;
    }
    
    
    
    
    
    return 0;
    
}