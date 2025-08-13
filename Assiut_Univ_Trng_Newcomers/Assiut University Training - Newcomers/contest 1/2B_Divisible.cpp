#include<bits/stdc++.h>
using namespace std;    

#define ll long long
#define endl '\n'

// function declarations
void solveQ(long long int a, long long int b, long long int k); 


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
    long long int a, b, k;
    cin >> a >> b >> k;


    // vector<int> a(n);
    // for (int i = 0; i < n; ++i) {
    //     cin >> a[i];
    // }

    solveQ(a, b, k);

    return 0;
}


void solveQ(long long int a, long long int b, long long int k) {

    if (a % k == 0 && b % k == 0) {
        cout << "Both";
    } 
    else if (a % k == 0) {
        cout << "Memo";
    } 
    else if (b % k == 0) {
        cout << "Momo";;
    } 
    else {
        cout << "No One";
    }

}