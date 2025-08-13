#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int a, b, c;  char op1, opEq;
    cin >> a >> op1 >> b >> opEq >> c ;

// A, S, B, Q, C r

    if(op1 == '+') {
        if(a+b == c) {
            cout<< "Yes";
        }
        else {
            cout << a+b;
        }
    }
    else if(op1 == '-') {
        if(a-b == c) {
            cout<< "Yes";
        }
        else {
            cout << a-b;
        }
    }
    else if(op1 == '*') {
        if(a*b == c) {
            cout<< "Yes";
        }
        else {
            cout << a*b;
        }
    }
    return 0;
}


