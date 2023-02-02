#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

class Solution {
public:
  void moveZeroes(vector<int> &nums) {

    int countZeroes = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] == 0)
        countZeroes++;
      else if (countZeroes > 0) {
        int temp = nums[i];
        nums[i] = 0;
        nums[i - countZeroes] = temp;
      }
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
