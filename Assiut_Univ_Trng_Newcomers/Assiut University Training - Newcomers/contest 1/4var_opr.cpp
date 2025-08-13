#include <iostream>
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

// ll apply(ll x, ll y, char op) {
//     if (op == '+') return x + y;
//     if (op == '-') return x - y;
//     if (op == '*') return x * y;
//     return 0;
// }

// bool isPossible(ll a, ll b, ll c, ll d) {
//     char ops[] = {'+', '-', '*'};
    
//     for (char op1 : ops) {
//         for (char op2 : ops) {
//             ll first = apply(a, b, op1);
//             ll result = apply(first, c, op2);
//             if (result == d) return true;
//         }
//     }
//     return false;
// }

// int main() {
//     ll a, b, c, d;
//     cout << "Enter four integers (a, b, c, d): " << endl;
//     // Read the input values
//     cin >> a >> b >> c >> d;

//     if (isPossible(a, b, c, d))
//         cout << "YES\n";
//     else
//         cout << "NO\n";

//     return 0;
// }


// *******************************************
// 2nd way err ???

// ll eval(ll a, ll b, ll c, char op1, char op2) {
//     // If op2 is *, it takes precedence
//     if (op2 == '*') {
//         ll temp = (b * c);
//         if (op1 == '+') return a + temp;
//         else if (op1 == '-') return a - temp;
//         else return a * temp;
//     } 
//     // If op1 is *, it takes precedence
//     else if (op1 == '*') {
//         ll temp = (a * b);
//         if (op2 == '+') return temp + c;
//         else return temp - c;
//     } 
//     // No *, just do left to right
//     else {
//         if (op1 == '+') {
//             if (op2 == '+') return a + b + c;
//             else return a + b - c;
//         } else {
//             if (op2 == '+') return a - b + c;
//             else return a - b - c;
//         }
//     }
// }

// bool isPossible(ll a, ll b, ll c, ll d) {
//     char ops[] = {'+', '-', '*'};
    
//     for (char op1 : ops) {
//         for (char op2 : ops) {
//             ll result = eval(a, b, c, op1, op2);
//             if (result == d) return true;
//         }
//     }
//     return false;
// }

// int main() {
//     ll a, b, c, d;
//     cin >> a >> b >> c >> d;

//     if (isPossible(a, b, c, d))
//         cout << "YES\n";
//     else
//         cout << "NO\n";

//     return 0;
// }


// 3rd way ... 
// 

#include <iostream>
using namespace std;
using ll = long long;

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    
    if (
        (a + b - c) == d ||
        (a + (b * c)) == d ||
        (a - b + c) == d ||
        (a - (b * c)) == d ||
        ((a * b) + c) == d ||
        ((a * b) - c) == d
    )
        cout << "YES";
    else
        cout << "NO";

    return 0;
}
