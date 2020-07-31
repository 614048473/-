#include <iostream>
#include<string>
using std::string;
using std::cin;
using std::cout; using std::endl;
using std::getline;
int main()
{
	string s;
	getline(cin,s);
	decltype(s.size()) cnt=0;
	for (auto c : s)
	{
		if (isdigit(c) || isspace(c))
		{
			cnt++;
		}
	}
	cout << cnt
		<< "digit and sapace in " << s << endl;
	return 0;
}