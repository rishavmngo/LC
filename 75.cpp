#include <iostream>
#include <limits.h>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
  void sortColors(vector<int> &nums) {
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high) {
      if (nums[mid] == 0) {
        swap(nums[mid], nums[low]);
        mid++;
        low++;
      } else if (nums[mid] == 1) {
        mid++;
      } else {
        swap(nums[mid], nums[high]);
        high--;
      }
    }
  }
};
int main(void) {
  Solution sol;
  vector<int> v = {2,0,2,1,1,0};

  sol.sortColors(v);
  for (auto x : v) {
    cout << x << " ";
  }
}
