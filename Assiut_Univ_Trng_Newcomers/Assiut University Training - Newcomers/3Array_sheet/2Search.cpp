#include<bits/stdc++.h>
using namespace std;    

// Function prototype for searchElt
int  searchElt(int n, vector<int> arr, int x);
// Function to search for an element in an array using linear search


int main() {

    int n;
    cin >> n; // Read the number of elements
    
    vector<int> arr(n); // Declare a vector to hold the elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Read each element into the vector
    }

    int x; cin>>x; // Read the element to search for
    int ans = searchElt(n, arr, x); // Call the search function

    cout << ans << endl; // Output the result of the search
    return 0;
}

int searchElt(int n, vector<int> arr, int x) {
    // Perform a linear search for the element x in the array arr
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            // cout << 1 << i << endl; // Output the index if found
            return i;
            break;
        }
    }
    //cout << "Element not found" << endl; // Output if the element is not found
    return -1;
}