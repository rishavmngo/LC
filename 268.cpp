
#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

class Solution {
public:
  int missingNumber(vector<int> &nums) {

    long long sum = 0;
    int n = INT_MIN;
    bool zero = false;
    for (int i = 0; i < nums.size(); i++) {
      sum += nums[i];
      if (n < nums[i])
        n = nums[i];
      if (nums[i] == 0)
        zero = true;
    }
    int expectedSum = (n * (n + 1)) / 2;

    return (expectedSum - sum) == 0 && zero ? n + 1 : expectedSum - sum;
  }
};

int main(void) {
  Solution sol;
  vector<int> v = {3, 0, 1};

  cout << sol.missingNumber(v);

  // for (auto x : v) {
  //   cout << x << " ";
  // }
}
