#include <iostream>
#include<vector>
#include<string>
using std::cin; using std::cout;
using std::endl; using std::string;
using std::vector; using std::string;
using std::getline;
int main()
{
	int i=0;
	vector<int> vec;
	while (cin >>i)
	{
		vec.push_back(i);
	}
	unsigned siz = vec.size();
	unsigned cnt = 0;
	while (cnt<siz/2)
	{
		cout << vec[siz-1 - cnt] + vec[cnt] << endl;
		cnt++;
	}

	return 0;
}