//
//  main.cpp
//  Linear Search
//
//  Created by Nguyen Phong on 7/28/19.
//  Copyright © 2019 Nguyen Phong. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int linearSearch(int x, vector<int> my_arr) {

    for (int i = 0; i < my_arr.size(); i++) {
        if (my_arr[i] == x) {
            return i;
            break;
        }
    }
    return -1;
}

int main(int argc, const char * argv[]) {
    int x {0};
    
    cout << "Nhập vào số x: ";
    cin >> x;
    
    vector<int> my_arr = {10, 20, 80, 30, 60, 50, 110, 100, 130, 170};
    
    cout << linearSearch(x, my_arr) << endl;
    if (linearSearch(x, my_arr) == -1) {
         cout << "Element " << x << " is not present" << endl;
    } else {
        cout << "Element " << x << " is present at index: " << linearSearch(x, my_arr) << endl;
    }
    
    
    return 0;
}
