#include<bits/stdc++.h>
using namespace std;


void find_Prime(int n, vector<bool> &isPrime); // function prototype      // function declaration


int main() {

    int n;
    cin >> n;

    vector<bool> isPrime(n + 1, true);
    find_Prime(n, isPrime); // function call
     
    int ct = 0;
    for(int i = 1; i <= n; i++) {
        if(isPrime[i]) {
            cout << i << " ";
            ct++;
        }     
        // find_Prime(n/i); 
    }
    
    cout << endl << "ct of prime 1 to n: " << ct << endl;
    return 0;
}

// function definition
void find_Prime(int n, vector<bool> &isPrime) {
    // if(n == 1) {
    //     cout << "NO" << endl;
    //     return;
    // }

   
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime

    // for range, we use this approach 
    for(int i = 2; i * i <= n; i++) {
         if(isPrime[i]) {
            for(int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
         }
    }

}

