#include<bits/stdc++.h>
using namespace std;

// Function prototype
void minimizeNumber(int n, vector<int>& arr); // Function to minimize the number by rearranging digits

int main() {
    int n; // Declare an integer variable to hold the size of the array
    cin >> n; // Read the size of the array from input
    vector<int> arr(n); // Declare a vector of integers with size n

    for (int i = 0; i < n; i++) { // Loop to read n integers into the vector
        cin >> arr[i]; // Read each integer from input
    }

    minimizeNumber(n, arr); // Call the function to minimize the number by rearranging digits

    // for (const auto& num : arr) { // Loop to print the minimized number
    //     cout << num; // Print each digit without spaces
    // }
    // cout << endl; // Print a newline at the end

    return 0; // Return 0 to indicate successful execution
}


// Function definition to minimize the number by dividing by 2 till it becomes odd
void minimizeNumber(int n, vector<int>& arr) {
    int cnt = 0; 
    bool evenFound = true; // Flag to check if an even number is found

    while (evenFound) { // Continue until no even number is found
        evenFound = false; // Reset the flag for this iteration

        for (int i = 0; i < n; i++) { // Loop through the array
            if (arr[i] % 2 == 0) { // Check if the number is even
                arr[i] /= 2; // Divide the number by 2
                evenFound = true; // Set the flag to true if an even number was found
            }
            else {
                evenFound = false; // If an odd number is found, reset the flag
                break; // Exit the loop as we only need to divide even numbers
            }
        } // for loop ends
        if(evenFound) {
            cnt++; // Increment the count of divisions
        }
    } // while loop ends

    cout <<  cnt; // Return the count of divisions
 
} // fn 