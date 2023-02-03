#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

class Solution {
public:
  int singleNumber(vector<int> &nums) {
    int XOR = 0;
    for (auto x : nums) {
			XOR = XOR ^ x;
    }
		return XOR;
  }
};
int main(void) {
  Solution sol;
  vector<int> v = {4,1,2,1,2};

  cout << sol.singleNumber(v);
  // for (auto x : v) {
  //   cout << x << " ";
  // }
}
