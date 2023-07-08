#include <iostream>
#include <unordered_set>
#include <vector>
using namespace std;

void printDuplicates(int arr[], int n) {
    unordered_set<int> uniqueSet;
    vector<int> duplicates;

    cout << "Duplicate elements in the array are: ";
    for (int i = 0; i < n; i++) {
       
        if (uniqueSet.find(arr[i]) != uniqueSet.end()) {
           
            duplicates.push_back(arr[i]);
        } else {
           
            uniqueSet.insert(arr[i]);
        }
    }

  
    for (int num : duplicates) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    int arr[7] = {1, 2, 3, 1, 2, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    printDuplicates(arr, size);

    return 0;
}

