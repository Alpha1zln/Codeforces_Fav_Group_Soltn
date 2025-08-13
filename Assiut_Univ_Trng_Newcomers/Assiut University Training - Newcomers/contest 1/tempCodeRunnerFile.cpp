void funcCombinationSum(int arr[], int i, int n, int sm, int target, vector<int>& combination, vector<vector<int>>& result);
void printCombinations(const vector<vector<int>>& result);  

// combination sum 1 using recursion

int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 6;

    vector<int> combination;
    vector<vector<int>> result;     
    int sm=0, i=0;
    funcCombinationSum(arr, i, n, sm, target, combination, result);


    int numCombinations = result.size();
    cout << "Number of combinations: " << numCombinations << endl;      
    printCombinations(result);

    return 0;
}


void funcCombinationSum(int arr[], int i, int n, int sm, int target, vector<int>& combination, vector<vector<int>>& result) {
    // Base case: if target is 0, we found a valid combination
    if (sm == target) {
        result.push_back(combination);
        return;
    }
    
    // If target becomes negative or no elements left, return
    if (sm > target || i == n) {
        return;
    }

    // Include the current element and recurse
    combination.push_back(arr[i]);   sm = sm + arr[i];
    funcCombinationSum(arr, i, n, sm, target, combination, result);
    
    // Exclude the current element and recurse
    combination.pop_back();        sm = sm - arr[i];
    funcCombinationSum(arr, i+1, n, sm, target, combination, result);
}



void printCombinations(const vector<vector<int>>& result) {
    for (const auto& combination : result) {
        for (int num : combination) {
            cout << num << " ";
        }
        cout << endl;
    }
}   
