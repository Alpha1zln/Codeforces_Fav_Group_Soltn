#include<bits/stdc++.h>
using namespace std;


void find_Prime(int n); // function prototype      // function declaration


int main() {

    int n;
    cin >> n;

    find_Prime(n); // function call 

    return 0;
}

// function definition
void find_Prime(int n) {
    // if(n == 1) {
    //     cout << "NO" << endl;
    //     return;
    // }

    // vector<bool> isPrime(n + 1, true);
    // isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime

    // for(int i = 2; i * i <= n; i++) {
    //     if(isPrime[i]) {
    //         for(int j = i * i; j <= n; j += i) {
    //             isPrime[j] = false;
    //         }
    //     }
    // }
    int cnt = 0;
    for(int i = 1; i*i <= n; i++) {
        if(n%i == 0) {
            cnt++;
            if(n/i != i) {
                cnt++;
            }
        } 
    }

    if(cnt == 2) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
    }
    // cout << endl;

}