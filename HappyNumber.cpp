#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution {
public:
	vector<int> v;
	bool isHappy(int n) {
		if (n == 1) {
			return true;
		}
		for (int i = 0; i < v.size(); i++) {
			if (n == v[i]) {
				return false;
			}
		}
		v.push_back(n);
		int tempNum = n;
		int sum = 0;
		while (tempNum) {
			sum += pow(tempNum % 10, 2);
			tempNum /= 10;
		}
		return isHappy(sum);
	}
};
