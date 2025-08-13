#include<bits/stdc++.h>
using namespace std;

long long find_Factorial(int n); // function prototype



int main() {

    int test_cases;
    cin >> test_cases;

    while(test_cases--) {
        int n;
        cin >> n;

        long long fact = find_Factorial(n);
        cout << fact << endl;
    }


    return 0;
}


long long find_Factorial(int n) {
    if(n==0 || n==1) {
        return 1;
    }

    long long fact = 1;
    for(int i=2; i<=n; i++) {
        fact *= i;
    }
    
    // or using recursion
    // fact = n * find_Factorial(n-1);
    
     
    return fact;
}
// function declaration
// function definition      
