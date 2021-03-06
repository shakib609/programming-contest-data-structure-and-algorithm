#include<iostream>
using namespace std;

int nums[5] = {1, 2, 3, 4, 5};

int upper_bound(int n, int value) {
    int begin = 0, end = n - 1, mid, temp;
    while (begin <= end) {
        mid = (begin + end) / 2;
        temp = nums[mid];
        if (temp > value)
            end = mid - 1;
        else
            begin = mid + 1;
    }
    return begin;
}

int main() {
    cout << upper_bound(5, 5) << endl;
}
