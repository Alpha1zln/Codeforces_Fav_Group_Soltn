#include<bits/stdc++.h>
using namespace std;

int main() {
    
    // int a, b, c, d;
    // cin >> a >> b >> c >> d;
    // int mod = 1e9 ;

    // if(a>c && b>d) {
    //     cout << "YES";
    // }
    // else if(c>a && d>b) {
    //     cout << "NO";
    // }
    // else if(a == c) {
    //     if(b>d) {
    //         cout << "YES";
    //     }
    //     else {
    //         cout << "NO";
    //     }
    // }
    // else if (b == d) {
    //     if(a>c) {
    //         cout << "YES";
    //     }
    //     else {
    //         cout << "NO";
    //     }
    // }

// #include <iostream>
// #include <cmath>


    long double A, B, C, D;
    cin >> A >> B >> C >> D;
    
    long double left = B * log(A);
    long double right = D * log(C);
    
    if (left > right) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
 

    return 0;
}