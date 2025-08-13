#include<bits/stdc++.h>
using namespace std;    
typedef long long int ll; // Define a type alias for long long int
typedef vector<int> vi; // Define a type alias for vector of integers       
typedef vector<vector<int> > vvi; // Define a type alias for vector of vec of integers
#define endl '\n' // Define a type alias for newline character

// Function prototype
void luckyArr(int n, vector<int>& arrVc); // Function to find the lucky array

int main() {

    int n;
    cin >> n; // Read the number of elements
    
    vector<int> arrVc(n); // Declare a vector to hold the elements
    for (int i = 0; i < n; i++) {
        cin >> arrVc[i]; // Read each element into the vector
    }

    luckyArr(n, arrVc); // Call the function to find the lucky array

    return 0;
}


// Function to find the lucky array
void luckyArr(int n, vector<int>& arrVc) {  
    int mini = INT_MAX; // Initialize the minimum value to the maximum possible integer
    int pos = -1; // Initialize the position of the lucky number to -1

    for(int i=0; i<n; i++) {
        if(arrVc[i] < mini) { // Check if the current element is less than the minimum found so far
            mini = arrVc[i]; // Update the minimum value
            pos = i; // Update the position of the lucky number
        }
    }

    // cout << "Lucky Number: " << mini << endl; // Output the lucky number
    //cout << "Position: " << pos + 1 << endl; // Output the position (1-based index)
    
    int cnt = 0; // Initialize the count of lucky numbers to 0
    for(int i=0; i<n; i++) {
        if(arrVc[i] == mini) { // Check if the current element is less than the minimum found so far
            cnt++; // Increment the count of lucky numbers
        }
    }

    if(cnt%2==1){
        cout << "Lucky" << endl; // If the count of lucky numbers is odd, print "Lucky"
    }
    else {
        cout << "Unlucky" << endl; // If the count of lucky numbers is even, print "Unlucky"
    }
    return; // Return from the function
}