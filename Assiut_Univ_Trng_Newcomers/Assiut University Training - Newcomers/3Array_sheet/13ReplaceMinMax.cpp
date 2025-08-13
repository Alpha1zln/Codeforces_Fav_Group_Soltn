#include<bits/stdc++.h>
using namespace std;
typedef long long int ll; // Define a type alias for long long int
typedef vector<int> vi; // Define a type alias for vector of integers
#define endl '\n' // Define a type alias for newline character

// Function prototype
void findMinMax(int n, vector<int>& arrVc); // Function to find the maximum subarray element
void swapMinMax(int& a, int& b); // Function to swap two integers
void printElements(vector<int> arrVc); // Function to print elements of the vector

int main() {

    int n; // Declare an integer variable to hold the size of the array
    cin >> n; // Read the size of the array from input
    vector<int> arrVc(n); // Declare a vector of integers with size n

    for (int i = 0; i < n; i++) { // Loop to read n integers into the vector
        cin >> arrVc[i]; // Read each integer from input
    }

    // print Elts before swapping
    // cout << "Before swapping minimum and maximum elements: " << endl; // Print a message before printing the elements
    // printElements(arrVc); // Call the function to print the elements of the vector

    findMinMax(n, arrVc); // Call the function to find the minimum and maximum elements in the array
    //and swap them

    // print Elts after swapping
    // cout << "After swapping minimum and maximum elements: " << endl; // Print a message before printing the elements after swapping
    printElements(arrVc); // Call the function to print the elements of the vector after swapping

    return 0; // Return 0 to indicate successful execution

}


void findMinMax(int n, vector<int>& arrVc) {
    int minElementIdx = 0; // Initialize minElement with the first element of the array
    int maxElementIdx = 0; // Initialize maxElement with the first element of the array

    for (int i = 1; i < n; i++) { // Loop through the array starting from the second element
        if (arrVc[i] < arrVc[minElementIdx]) { // If current element is less than minElement
            minElementIdx = i; // Update minElement
        }
        if (arrVc[i] > arrVc[maxElementIdx]) { // If current element is greater than maxElement
            maxElementIdx = i; // Update maxElement
        }
    }

    swapMinMax(arrVc[minElementIdx], arrVc[maxElementIdx]); // Swap the minimum and maximum elements
    // cout << "Minimum Element: " << minElement << endl; // Print the minimum element
    // cout << "Maximum Element: " << maxElement << endl; // Print the maximum element
}   


void swapMinMax(int& a, int& b) {
    int temp = a; // Store the value of a in a temporary variable
    a = b; // Assign the value of b to a
    b = temp; // Assign the value of temp (original a) to b
}

void printElements(vector<int> arrVc) {
    for (int i = 0; i < arrVc.size(); i++) { // Loop through the vector
        cout << arrVc[i] << " "; // Print each element followed by a space
    }
    cout << endl; // Print a newline at the end
}

