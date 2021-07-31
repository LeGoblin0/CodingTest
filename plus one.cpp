#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
	vector<int> plusOne(vector<int>& digits) {
		int digSize = digits.size() - 1;
		for (int i = digSize; i >= 0; i--)
		{
			if (digits[i] != 9)
			{
				digits[i]++;
				break;
			}
			else
			{
				digits[i] = 0;
			}
		}
		if (!digits[0])
		{
			digits[0] = 1;
			digits.push_back(0);
		}
		return digits;
	}
};