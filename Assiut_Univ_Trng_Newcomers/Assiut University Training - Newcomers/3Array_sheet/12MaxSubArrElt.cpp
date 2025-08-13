#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; // Define a type alias for long long int
typedef vector<int> vi; // Define a type alias for vector of integers
#define endl '\n' // Define a type alias for newline character

// Function prototype
void maxSubArrElt(int n, vector<int>& arrVc); // Function to find the maximum subarray element

int main() {
    int testCases;
    cin >> testCases; // Read the number of test cases

    while(testCases--) { // Loop through each test case
        int n;
        cin >> n; // Read the number of elements for the current test case
        
        vector<int> arrVc(n); // Declare a vector to hold the elements
        for (int i = 0; i < n; i++) {
            cin >> arrVc[i]; // Read each element into the vector
        }

        maxSubArrElt(n, arrVc); // Call the function to find the maximum subarray element
    }   
    
    return 0;
}


// Function to find the maximum subarray element
void maxSubArrElt(int n, vector<int>& arrVc) {
    
    for (int i=0; i<=n-1; i++) {
        int maxElt = INT_MIN; // Initialize the maximum element to the minimum possible integer
        for(int j=i; j<=n-1; j++) {
            maxElt = max(maxElt, arrVc[j]); // Update the maximum element in the current subarray
            cout<< maxElt << " "; // Output the maximum element found in the current subarray
        } 
    } // fr i
    cout << endl; // Print a newline after processing all subarrays
    return; // Return from the function    

}