#include<bits/stdc++.h>
using namespace std;


void find_Divisor(int n); // function prototype      // function declaration


int main() {

    int n;
    cin >> n;

    find_Divisor(n);


    return 0;
}

// function definition  
void find_Divisor(int n) {
    vector<int> divisors; // Vector to store divisors

    for(int i = 1; i*i<=n; i++) { // Loop from 1 to sqrt(n)
        if(n % i == 0) { // If i is a divisor
            divisors.push_back(i); // Add i to the list of divisors
            if(i != n/i) { // Check if the corresponding divisor is different
                divisors.push_back(n / i); // Add the corresponding divisor
            }
        }
    }

    sort(divisors.begin(), divisors.end()); // Sort the divisors

    for(int d : divisors) { // Print all divisors
        cout << d << " ";
    }
    cout << endl;
}