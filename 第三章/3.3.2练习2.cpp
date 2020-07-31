#include <iostream>
#include<vector>
#include<string>
using std::cin; using std::cout;
using std::endl; using std::string;
using std::vector; using std::string;
using std::getline;
int main()
{
	string str;
	vector<string> vec;

	int i = 0;

	while (cin>>str)
	{
		vec.push_back(str);
		i++;
	}
	int j = i;
	while (j != 0)
	{
		for (auto &c : vec[i - j ])
		{
			c=toupper(c);		
		}
		j--;
	}
	j = i;
	while (j != 0)
	{
		cout << "vec[" << i - j  << "]:" << vec[i -j ] << endl;
		j--;
	}
	
	
	
	return 0;

}