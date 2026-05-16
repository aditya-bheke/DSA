#include <bits/stdc++.h>
using namespace std;

/*
    Function: partition

    Purpose:
    Places pivot element at its
    correct sorted position.

    Elements:
    <= pivot go left side
    > pivot go right side

    Returns:
    Final pivot index
*/
int partition(vector<int>& arr,
              int st,
              int end) {

    /*
        idx keeps track of
        smaller element region
    */
    int idx = st - 1;

    /*
        Choose last element
        as pivot
    */
    int pivot = arr[end];

    /*
        Traverse array
        from st to end-1
    */
    for(int j = st; j < end; j++) {

        /*
            If current element
            belongs to left side
        */
        if(arr[j] <= pivot) {

            idx++;

            /*
                Place smaller element
                into left region
            */
            swap(arr[j], arr[idx]);
        }
    }

    /*
        Place pivot after
        smaller elements
    */
    idx++;

    swap(arr[idx], arr[end]);

    /*
        Return final pivot position
    */
    return idx;
}

/*
    Function: quickSort

    Purpose:
    Recursively sorts array
    using Quick Sort algorithm.
*/
void quickSort(vector<int>& arr,
               int st,
               int end) {

    /*
        Base Case:

        If subarray has
        0 or 1 element,
        already sorted.
    */
    if(st < end) {

        /*
            Find correct pivot position
        */
        int idx = partition(arr, st, end);

        /*
            Sort left side
        */
        quickSort(arr, st, idx - 1);

        /*
            Sort right side
        */
        quickSort(arr, idx + 1, end);
    }
}

int main() {

    vector<int> arr = {12,31,35,8,32,17};

    // Start Quick Sort
    quickSort(arr, 0, arr.size() - 1);

    // Print sorted array
    cout << "{ ";

    for(int i = 0; i < arr.size(); i++) {

        cout << arr[i] << " ";
    }

    cout << "}";

    return 0;
}