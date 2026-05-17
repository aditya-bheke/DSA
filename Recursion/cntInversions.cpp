#include<bits/stdc++.h>
using namespace std;

/*
    Function: merge

    Purpose:
    1. Merge two sorted halves
    2. Count cross inversions

    Left Half  -> st to mid
    Right Half -> mid+1 to end
*/
int merge(vector<int>& arr,
          int st,
          int mid,
          int end) {

    // Temporary array
    vector<int> temp;

    // Pointer for left half
    int i = st;

    // Pointer for right half
    int j = mid + 1;

    /*
        Stores inversion count
    */
    int inv = 0;

    /*
        Merge both sorted halves
    */
    while(i <= mid && j <= end) {

        /*
            No inversion exists

            because:
            arr[i] <= arr[j]
        */
        if(arr[i] <= arr[j]) {

            temp.push_back(arr[i]);
            i++;
        }

        /*
            Inversion exists

            because:
            arr[i] > arr[j]
        */
        else {

            /*
                Count inversions

                Since left half is sorted,
                all remaining elements
                from i to mid are greater
                than arr[j]

                Count:
                mid - i + 1
            */
            inv += mid - i + 1;

            temp.push_back(arr[j]);
            j++;
        }
    }

    /*
        Remaining elements
        from left half
    */
    while(i <= mid) {

        temp.push_back(arr[i]);
        i++;
    }

    /*
        Remaining elements
        from right half
    */
    while(j <= end) {

        temp.push_back(arr[j]);
        j++;
    }

    /*
        Copy sorted elements
        back into original array
    */
    for(int i = 0; i < temp.size(); i++) {

        arr[i + st] = temp[i];
    }

    return inv;
}

/*
    Function: mergeSort

    Purpose:
    1. Sort the array
    2. Count inversions recursively
*/
int mergeSort(vector<int>& arr,
              int st,
              int end) {

    /*
        Base Case

        Single element:
        no inversion possible
    */
    if(st < end) {

        int mid = st + (end - st) / 2;

        /*
            Count inversions
            in left half
        */
        int leftInv = mergeSort(arr, st, mid);

        /*
            Count inversions
            in right half
        */
        int rightInv = mergeSort(arr, mid + 1, end);

        /*
            Count cross inversions
            during merge
        */
        int inv = merge(arr, st, mid, end);

        /*
            Total inversions
        */
        return leftInv + rightInv + inv;
    }

    return 0;
}

int main() {

    vector<int> arr = {2, 4, 1, 3, 5};

    /*
        Print inversion count
    */
    cout << mergeSort(arr, 0, arr.size() - 1);

    return 0;
}