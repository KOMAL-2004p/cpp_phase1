#include <iostream>
using namespace std;
class solution{
    int linear_search(int nums[], int n, int target){
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                return i;
            }
        }
        return -1;
    }
}; 