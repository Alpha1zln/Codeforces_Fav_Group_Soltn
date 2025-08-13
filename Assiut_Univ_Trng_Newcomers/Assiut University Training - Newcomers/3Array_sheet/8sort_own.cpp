#include<bits/stdc++.h>
using namespace std;    
typedef long long int ll; // Define a type alias for long long int
typedef vector<int> vi; // Define a type alias for vector of integers       
#define endl '\n' // Define a type alias for newline character

// Function prototype
void sortOwn(int n, vector<int>& arrVc); // Function to sort the array using a custom sorting algorithm
void printElts(vector<int> arrVc); // Function to print the sorted elements
void mergeSort(vector<int>& arrVc, int left, int right); // Function to perform merge sort on the array
void merge(vector<int>& arrVc, int left, int mid, int right); // Function to merge two sorted halves of the array   


// Main function
int main() {

    int n;
    cin >> n; // Read the number of elements
    
    vector<int> arrVc(n); // Declare a vector to hold the elements
    for (int i = 0; i < n; i++) {
        cin >> arrVc[i]; // Read each element into the vector
    }

    //cout << "Before sorting: " << endl;
    // Print the elements before sorting
    //printElts(arrVc); 

    sortOwn(n, arrVc); // Call the function to sort the array

    //cout << "After sorting: " << endl;
    // Print the elements after sorting
    printElts(arrVc); // Call the function to print the sorted elements
    return 0;
}

// bubble sort algorithm
// // Function to sort the array using a custom sorting algorithm
// void sortOwn(int n, vector<int>& arrVc) {   
//     // Implementing a simple bubble sort algorithm
//     for (int i = 0; i <= n-1; i++) {
//         for (int j = 0; j <= n-2-i; j++) {
//             if (arrVc[j] > arrVc[j + 1]) { // Compare adjacent elements
//                 swap(arrVc[j], arrVc[j + 1]); // Swap if they are in the wrong order
//             }
//         }
//     }
// }   


// Function to sort the array using a custom sorting algorithm
void sortOwn(int n, vector<int>& arrVc) {
    // merge sort algorithm
    if (n <= 1) return; // Base case: if the array has less than 2 elements, it's already sorted         

    mergeSort(arrVc, 0, n - 1); // Call the merge sort function

}

// Function to perform merge sort on the array
void mergeSort(vector<int>& arrVc, int left, int right) {   
    if (left < right) { // Check if the left index is less than the right index
        int mid = left + (right - left) / 2; // Calculate the middle index

        mergeSort(arrVc, left, mid); // Recursively sort the left half
        mergeSort(arrVc, mid + 1, right); // Recursively sort the right half

        merge(arrVc, left, mid, right); // Merge the two halves
    }
}

// Function to merge two sorted halves of the array
void merge(vector<int>& arrVc, int left, int mid, int right) {  
    int left1 = left; 
    int left2 = mid+1; 

    vector<int> temp; // Create a vector to store the merged elements
    while (left1 <= mid && left2 <= right) { // While both halves have elements
        if (arrVc[left1] <= arrVc[left2]) { // Compare the elements from both halves
            temp.push_back(arrVc[left1]); // Add the smaller element to the temp vector
            left1++; // Move to the next element in the left half
        } else {
            temp.push_back(arrVc[left2]); // Add the smaller element to the temp vector
            left2++; // Move to the next element in the right half
        }
    }

    while (left1 <= mid) { // If there are remaining elements in the left half
        temp.push_back(arrVc[left1]); // Add them to the temp vector
        left1++; // Move to the next element in the left half
    }   

    while (left2 <= right) { // If there are remaining elements in the right half
        temp.push_back(arrVc[left2]); // Add them to the temp vector
        left2++; // Move to the next element in the right half
    }

    // Copy the merged elements back to the original array
    for (int i = 0; i <= temp.size() - 1; i++) {
        arrVc[left + i] = temp[i]; // Copy each element from the temp vector to the original array
    }

    return; // Return from the function
    
}









// Function to print the elements of the vector 
void printElts(vector<int> arrVc) {     
    for(int i = 0; i < arrVc.size(); i++) {
        cout << arrVc[i] << " "; // Print each element
    }
//    cout << endl; // Print a newline at the end
}

