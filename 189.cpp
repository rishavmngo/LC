
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

class Solution {
public:
  void rotate(vector<int> &nums, int k) {
    int arraySize = nums.size();
    k = k % arraySize;
    int divide = arraySize - k;

    reverse(nums, 0, divide - 1);

    reverse(nums, divide, arraySize - 1);

    reverse(nums, 0, arraySize - 1);
  }
  void reverse(vector<int> &nums, int start, int end) {

    for (int i = start, j = end; i <= j; i++, j--) {
      int temp = nums[i];
      nums[i] = nums[j];
      nums[j] = temp;
    }
  }
};

int main(void) {
  Solution sol;
  vector<int> v = {1, 2, 3, 4, 5, 6, 7};

  sol.rotate(v, 0);

  for (auto x : v) {
    cout << x << " ";
  }
}
