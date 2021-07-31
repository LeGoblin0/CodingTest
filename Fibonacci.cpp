#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> v;
	bool check;
	bool isHappy(int n) {
		if (n == 1)
		{
			check = true;
			return true;
		}
		for (int i = 0; i < v.size(); i++)
			if (n == v[i])
			{
				check = false;
				return false;
			}
		v.push_back(n);
		int copy = n;
		int sum = 0;

		while (copy)
		{
			sum += (copy % 10)*(copy % 10);
			copy /= 10;
		}
		isHappy(sum);
		return check;
	}
};