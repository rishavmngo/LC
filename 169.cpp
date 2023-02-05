#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

class Solution {
public:
  int majorityElement(vector<int> &nums) {
    int major = nums[0], count = 1;
    for (int i = 1; i < nums.size(); i++) {

      if (count == 0) {
        count++;
        major = nums[i];
      } else if (nums[i] == major)
        count++;
      else
        count--;
    }
		return major;
  }
};
int main(void) {
  Solution sol;
  vector<int> v = {2, 2, 1, 1 , 2};

  cout << sol.majorityElement(v);
  // for (auto x : v) {
  //   cout << x << " ";
  // }
}
