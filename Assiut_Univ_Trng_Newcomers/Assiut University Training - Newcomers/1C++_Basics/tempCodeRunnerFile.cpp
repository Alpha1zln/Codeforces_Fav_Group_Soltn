#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int mod = 1e9 ;

    if(a>c && b>d) {
        cout << "YES";
    }
    else if(c>a && d>b) {
        cout << "YES";
    }
    else if(a == c) {
        if(b>d) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }

    return 0;
}