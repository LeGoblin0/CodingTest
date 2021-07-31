#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	string str;
	string extractStr = "";
	vector<int> v;
	str = "kongstudios";


	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
		{
			extractStr += str[i];
			v.push_back(i);
		}
	}
	reverse(extractStr.begin(), extractStr.end());

	for (int i = 0; i < v.size(); i++)
	{
		str[v[i]] = extractStr[i];
	}

}