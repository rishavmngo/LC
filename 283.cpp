#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

class Solution {
public:
  void moveZeroes(vector<int> &nums) {

    int countZeroes = 0;
    for (int i = 0, a = 0; i < nums.size(); i++) {
      if (nums[i] != 0) {
        nums[a] = nums[i];
        a++;
        if (countZeroes > 0) {

          nums[i] = 0;
        }
      } else
        countZeroes++;
    }
  }
};

int main(void) {
  Solution sol;
  vector<int> v = {0, 2, 3, 0, 5, 6, 7};

  sol.moveZeroes(v);

  for (auto x : v) {
    cout << x << " ";
  }
}
