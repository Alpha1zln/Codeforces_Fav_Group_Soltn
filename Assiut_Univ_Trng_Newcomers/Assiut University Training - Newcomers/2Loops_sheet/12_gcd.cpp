#include<bits/stdc++.h>
using namespace std;


void find_GCD(int n1, int n2); // function prototype      // function declaration


int main() {

    int n1, n2;
    // cout << "Enter two numbers to find GCD: ";
    cin >> n1 >> n2; 

    find_GCD(n1, n2); // function call

    return 0;   
}

// function definition
void find_GCD(int n1, int n2) {
    // Using Euclidean algorithm to find GCD
    int gcd=1; 
    
    while(n2>0 && n1>0) { 
        if(n1 > n2) {
            n1 = n1 % n2; // Reduce n1
        } else {
            n2 = n2 % n1; // Reduce n2
        }
    }

    // The GCD is the last non-zero value
    if(n1 == 0) {
        gcd = n2; // If n1 is zero, GCD is n2
    } else {
        gcd = n1; // If n2 is zero, GCD is n1
    }
    
    cout <<  gcd << endl; // Output the GCD
}