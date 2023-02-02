#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

class Solution {
public:
  int missingNumber(vector<int> &nums) {
		int cumXor = 0;
		int i = 0;
		for(i = 0; i < nums.size(); i++){
			cumXor = cumXor ^ i ^ nums[i];
		}
		return i ^ cumXor;
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
