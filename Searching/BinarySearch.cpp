//
//  main.cpp
//  Binary Search
//
//  Created by Nguyen Phong on 8/28/19.
//  Copyright © 2019 Nguyen Phong. All rights reserved.
//
//

// Searching 
//  Binary Search: Search a sorted array by repeatedly dividing the search interval in half. Begin with an interval covering the whole array. If the value of the search key is less than the item in the middle of the interval, narrow the interval to the lower half. Otherwise narrow it to the upper half. Repeatedly check until the value is found or the interval is empty.

#include <iostream>
#include <vector>

using namespace std;

// Import Function
int importVariable() {
    int x {0};
    
    cout << "Nhập vào số x: ";
    cin >> x;
    
    return x;
}

// Print Function
void printResult(int count) {
    if (count == 1)
        cout << "Element found" << endl;
    else
        cout << "Element not found" << endl;
}

void binarySearch(int x, vector<int> my_arr) {
    int count {0};
    int start {0};
    int end = int(my_arr.size() - 1);
    int middle = int((end - start) / 2);
    
    // Find element in vector
    while ((start != end && my_arr[middle] != x)) {
        // Find element from middle index plus 1 to end index
        if (my_arr[middle] < x) {
            start = middle + 1;
            middle = start + int((end - start) / 2);
        }
       
        // Find element from start index to middle index minus 1
        else if (my_arr[middle] > x) {
            end = middle - 1;
            middle = start + int((end - start) / 2);
        }
    }
    
    // Check if we found element
    if (my_arr[middle] == x)
        count ++;
    
    printResult(count);
    
}

int main(int argc, const char * argv[]) {
    
    
    vector<int> my_arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    
    binarySearch(importVariable(), my_arr);

    return 0;
}
