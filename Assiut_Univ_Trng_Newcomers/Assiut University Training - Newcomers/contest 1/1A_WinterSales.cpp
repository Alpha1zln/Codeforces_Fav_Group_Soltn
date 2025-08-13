#include<bits/stdc++.h>
using namespace std;    

#define ll long long
#define endl '\n'

// function declarations
void solveQ(int n, vector<int> &a); 


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
    double discoutPercent, priceAfterDiscount;
    cin >> discoutPercent >> priceAfterDiscount;


    // vector<int> a(n);
    // for (int i = 0; i < n; ++i) {
    //     cin >> a[i];
    // }

    // Calculate the original price before discount
    double originalPrice = priceAfterDiscount / (1 - discoutPercent / 100.0);
    cout << fixed << setprecision(2) ;
    cout << originalPrice ;


    return 0;
}


// void solveQ(int n, vector<int>& a) {

// }