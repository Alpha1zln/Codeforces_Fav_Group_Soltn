// #include<bits/stdc++.h>
// using namespace std;    
// typedef long long int ll; // Define a type alias for long long int
// typedef vector<int> vi; // Define a type alias for vector of integers       
// typedef vector<vector<int> > vvi; // Define a type alias for vector of vec of integers
// #define endl '\n' // Define a type alias for newline character

// // Function prototype
// void sumDigits(int n, int num); // Function to find the lucky array

// int main() {

//     int n;
//     cin >> n; // Read the number of elements
    
//     // vector<int> arrVc(n); // Declare a vector to hold the elements
//     // for (int i = 0; i < n; i++) {
//     //     cin >> arrVc[i]; // Read each element into the vector
//     // }
//     int num;
//     cin >> num; // Read the number to find the sum of its digits

//     sumDigits(n, num ); // Call the function to find the sum of digits

//     return 0;
// }


// // Function to find the sum of digits of each element in the array
// void sumDigits(int n, int num) { 
//     int summ = 0; // Initialize the sum to 0
//     for(int i=0; i<n; i++) {   
//         int digit = num % 10; // Get the last digit of the number 
//         summ  += digit; // Add the current element to the sum
//         num /= 10; // Remove the last digit from the number
//     }

//     cout<< summ << endl; // Output the total sum of digits
//     return; // Return from the function
// }


#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    string digits;
    cin >> n >> digits;

    for (char ch : digits) {
        sum += ch - '0';  // Convert char digit to int
    }

    cout << sum << endl;
    return 0;
}
