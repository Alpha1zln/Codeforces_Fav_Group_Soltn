#include<bits/stdc++.h>
using namespace std;        
typedef long long int ll; // Define a type alias for long long int
typedef vector<int> vi; // Define a type alias for vector of integers   
typedef vector<vector<int> > vvi; // Define a type alias for vector of vec of integers   
#define endl '\n' // Define a type alias for newline character

// Function prototype
int smallestPair(int n, vector<int>& arrVc); // Function to find the smallest pair 
//void printElts(vector<int> arrVc); // Function to print the elements

int main() {

    int testCases;
    cin >> testCases; // Read the number of test cases

    while (testCases--) { // Loop through each test case
        int n;
        cin >> n; // Read the number of elements for the current test case
        
        vector<int> arrVc(n); // Declare a vector to hold the elements
        for (int i = 0; i < n; i++) {
            cin >> arrVc[i]; // Read each element into the vector
        }

        int smallest = smallestPair(n, arrVc); // Call the function to find the smallest pair
        cout << smallest << endl; // Output the smallest pair
    }
  

    return 0;
}


// Function to find the smallest pair in the array
int smallestPair(int n, vector<int>& arrVc) {      
    int mini = INT_MAX; // Initialize the minimum value to the maximum possible integer

    for(int i=0; i<=n-2; i++) {
        for(int j=i+1; j<=n-1; j++) {
            int sumGrp = arrVc[i] + arrVc[j] + j - i;
            if(sumGrp < mini) { // Check if the current sum is less than the minimum found so far
                mini = sumGrp; // Update the minimum value        
            }
        } //fr inr
    } // fr otr

    return mini; // Return the smallest pair found
} // fnn