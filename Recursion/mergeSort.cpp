#include <bits/stdc++.h>
using namespace std;

/*
    Function: merge

    Purpose:
    Merges two already sorted halves
    into one sorted array.

    Left Half  -> st to mid
    Right Half -> mid+1 to end
*/
void merge(vector<int>& arr,
           int st,
           int mid,
           int end) {

    // Temporary array to store merged result
    vector<int> temp;

    /*
        i -> pointer for left half
        j -> pointer for right half
    */
    int i = st;
    int j = mid + 1;

    /*
        Compare elements from both halves
        and insert smaller element into temp
    */
    while(i <= mid && j <= end) {

        if(arr[i] <= arr[j]) {

            temp.push_back(arr[i]);
            i++;

        } else {

            temp.push_back(arr[j]);
            j++;
        }
    }

    /*
        Copy remaining elements
        from left half
    */
    while(i <= mid) {

        temp.push_back(arr[i]);
        i++;
    }

    /*
        Copy remaining elements
        from right half
    */
    while(j <= end) {

        temp.push_back(arr[j]);
        j++;
    }

    /*
        Copy sorted temp array
        back into original array
    */
    for(int i = 0; i < temp.size(); i++) {

        /*
            Why i + st ?

            temp always starts from index 0

            But merged portion inside original array
            may start from some other index.

            Example:

            st = 3

            temp:
            [8,17,32]

            Mapping becomes:

            temp[0] -> arr[3]
            temp[1] -> arr[4]
            temp[2] -> arr[5]

            So:
            arr[i + st]
        */
        arr[i + st] = temp[i];
    }
}

/*
    Function: mergeSort

    Purpose:
    Recursively divides array
    into smaller halves.

    Then merges them in sorted order.
*/
void mergeSort(vector<int>& arr,
               int st,
               int end) {

    /*
        Base Case:

        If only one element remains,
        array is already sorted.
    */
    if(st < end) {

        /*
            Find middle index
        */
        int mid = st + (end - st) / 2;

        /*
            Sort left half
        */
        mergeSort(arr, st, mid);

        /*
            Sort right half
        */
        mergeSort(arr, mid + 1, end);

        /*
            Merge both sorted halves
        */
        merge(arr, st, mid, end);
    }
}

int main() {

    vector<int> arr = {12,31,35,8,32,17};

    int st = 0;
    int end = arr.size() - 1;

    // Start merge sort
    mergeSort(arr, st, end);

    // Print sorted array
    cout << "{ ";

    for(int i = 0; i < arr.size(); i++) {

        cout << arr[i] << " ";
    }

    cout << "}";

    return 0;
}