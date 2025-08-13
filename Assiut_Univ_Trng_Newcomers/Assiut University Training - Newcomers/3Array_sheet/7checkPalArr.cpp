#include<bits/stdc++.h>
using namespace std;        
typedef long long int ll; // Define a type alias for long long int
typedef vector<int> vi; // Define a type alias for vector of integers       
#define endl '\n' // Define a type alias for newline character


// Function prototype
bool checkPalArr(int n, vector<int>& arrVc); // Function to check if the array is a palindrome

int main() {

    int n;
    cin >> n; // Read the number of elements
    
    vector<int> arrVc(n); // Declare a vector to hold the elements
    for (int i = 0; i < n; i++) {
        cin >> arrVc[i]; // Read each element into the vector
    }

    bool ans = checkPalArr(n, arrVc); // Call the function to check if the array is a palindrome

    // Output the result
    if (ans) {
        cout << "YES" << endl; // If the array is a palindrome, print "YES"
    } else {    
        cout << "NO" << endl; // If the array is not a palindrome, print "NO"
    }

    // Return 0 to indicate successful execution
    return 0;
}   

// Function to check if the array is a palindrome
bool checkPalArr(int n, vector<int>& arrVc) {   
    bool isPalindrome = true; // Flag to check if the array is a palindrome

    // Check elements from both ends towards the center
    for (int i = 0; i < n / 2; i++) {
        if (arrVc[i] != arrVc[n - i - 1]) { // Compare elements
            isPalindrome = false; // If any pair doesn't match, it's not a palindrome
            break;
        }
    }

    // // Output the result
    // if (isPalindrome) {
    //     cout << "The array is a palindrome." << endl;
    // } else {
    //     cout << "The array is not a palindrome." << endl;
    // }
    return isPalindrome;

}