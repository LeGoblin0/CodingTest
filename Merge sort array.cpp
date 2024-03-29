#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		int i = m - 1;
		int j = n - 1;
		int k = m + n - 1;
		while (true) {
			if (j < 0) break;
			if (i < 0 || nums1[i] < nums2[j]) {
				nums1[k--] = nums2[j--];
				continue;
			}
			nums1[k--] = nums1[i--];
		}
	}
};
class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		for (int i = m; i < m + n; i++) {
			nums1[i] = nums2[i - m];
		}
		sort(nums1.begin(), nums1.end());
	}
};