#include<bits/stdc++.h>
using namespace std;    

// errrorrrrrrrrrrrrrrrr


#define ll long long
#define endl '\n'

// function declarations
void solveQ(int a, int b, int c, long long d); 


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    // int test_cases;
    // cin >> test_cases;
    
    // while (test_cases--) {
    //     int n, m;
    //     cin >> n >> m;
        
    //     vector<int> a(n);
    //     for(int i = 0; i < n; ++i) {
    //         cin >> a[i];
    //     }

    //     solveQ(n, a); 
            
    // }

    // Single test case
    int a,b,c; long long d; 
    // Read the input values
    cin >> a >> b >> c >> d;
    
    solveQ(a,b,c,d);

    return 0;

}


void solveQ(int a, int b, int c, long long d) {


    // case 1 a+b-c = d
    if (a + b - c == d) {
        cout<< "YES";
        //cout<< a << " + "   << b << " - "  << c << " = " << d; 
        return;
    }
    // case 2 a+b*c = d
    else if (a + b * c == d ) {
        if( (b < (LONG_LONG_MAX-a) / c) || (b > (LONG_LONG_MIN+a)/c) ) { // Prevent overflow
            cout<< "YES";
            //cout<< a << " + " << b << " * " << c << " = " << d;
            return;
        }    
        else if((a+b)*c == d) {
            if(c < LONG_LONG_MAX / (a + b) && c > LONG_LONG_MIN / (a + b)) { // Prevent overflow
                cout<< "YES";
             //   cout<< a << " + " << b << " * " << c << " = " << d;
                return;
            }
        }
    }
    // case 3 a-b+c = d
    else if (a - b + c == d) {
        cout<< "YES";
        cout<< a << " - " << b << " + " << c << " = " << d;
        return;
    }
    // case 4 a-b*c = d
    else if (a - b * c == d) {
        if( (b < (LONG_LONG_MAX-a) / c) || (b > (LONG_LONG_MIN+a)/c) ) { // Prevent overflow
            cout<< "YES";
            //cout<< a << " - " << b << " * " << c << " = " << d;
            return;
        }
        else if((a-b)*c == d) {
            if(c < LONG_LONG_MAX / (a - b) && c > LONG_LONG_MIN / (a - b)) { // Prevent overflow
                cout<< "YES";
                //cout<< a << " - " << b << " * " << c << " = " << d;
                return;
            }
        }
        
    }
    // case 5 a*b+c = d     
    else if (a * b + c == d) {
        if( (a < (LONG_LONG_MAX-c) / b) || (a > (LONG_LONG_MIN+c)/b) ) { // Prevent overflow
            cout<< "YES";
            //cout<< a << " * " << b << " + " << c << " = " << d;
            return;
        }
        else if( a * (b + c) == d) {
            if(b + c < LONG_LONG_MAX / a && b + c > LONG_LONG_MIN / a) { // Prevent overflow
                cout<< "YES";
                //cout<< a << " * " << b << " + " << c << " = " << d;
                return;
            }
        }
        
    }
    // case 6 a*b-c = d
    else if (a * b - c == d) {
        if( (a < (LONG_LONG_MAX-c) / b) || (a > (LONG_LONG_MIN+c)/b) ) { // Prevent overflow
            cout<< "YES";
            cout<< a << " * " << b << " - " << c << " = " << d;
            return;
        }
        else if( a * (b - c) == d) {
            if(b - c < LONG_LONG_MAX / a && b - c > LONG_LONG_MIN / a) { // Prevent overflow
                cout<< "YES";
                //cout<< a << " * " << b << " - " << c << " = " << d;
                return;
            }
        }
    }
    else {
        cout<< "NO";
    }

}
