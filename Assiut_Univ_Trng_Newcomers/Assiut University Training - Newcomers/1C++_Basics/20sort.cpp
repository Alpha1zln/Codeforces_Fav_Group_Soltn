#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int a, b, c;
    cin >> a >> b >> c;
    
    int m1, m2, m3;
    
    if(a>=b && a>=c) {
        m3 = a;
        if(b>=c) {
            m2 = b;
            m1 = c;
        }
        else {
            m2 = c;
            m1 = b;
        }
    }
    else if(b>=a && b>=c) {
        m3 = b;
        if(a>=c) {
            m2 = a;
            m1 = c;
        }
        else {
            m2 = c;
            m1 = a;
        }
    }
    else if(c>=a && c>=b)  {
        m3 = c;
        if(a>=b) {
            m2 = a;
            m1 = b;
        }
        else {
            m2 = b;
            m1 = a;
        }
    }
    
    cout << m1 << endl << m2 << endl << m3 << endl << "" << endl;
    cout << a << endl << b << endl << c << endl;
    
    
    return 0;
    
}