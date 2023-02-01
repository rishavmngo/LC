#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

class Solution {
public:
  bool check(vector<int> &nums) {
    bool ans = true;

    // Find larger number in the array
    int large_num = INT_MIN;
    int large_num_index = 0;
    int size = nums.size();

    for (int i = 0; i < size; i++) {
      if (large_num <= nums[i]) {
        large_num_index = i;
        large_num = nums[i];
      }
    }

    // Find the smallest number in the array
    // Finding should start after the largest element
    int j = large_num_index;
    int num = nums[large_num_index];
    int small_index_num = large_num_index;
    for (int i = 0; i < size - 1; i++) {
      j = (j + 1) % size;

      if (num > nums[j]) {
        small_index_num = j;
        break;
      }
      num = nums[j];
    }

		//starting from small_index_num check if the array is sorted or not
    j = small_index_num;
    num = nums[j];
    for (int i = 0; i < size - 1; i++) {
      j = (j + 1) % size;

      if (num > nums[j]) {
        ans = false;
        break;
      }
      num = nums[j];
    }

    return ans;
  }
};

int main(void) {
  Solution sol;
  vector<int> v = {3, 3, 3};
  cout << sol.check(v);

  // for(auto x: v)
  // {
  // 	cout << x << " ";
  // }
}
