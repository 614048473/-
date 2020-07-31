#include <iostream>
#include<vector>
using std::cin; using std::cout;
using std::endl; using std::string;
using std::vector;
int main()
{
	vector<int> v1; vector<int> v2(10);
	vector<int> v3(10, 42); vector<int> v4{ 10};
	vector<int> v5{ 10,42 }; vector<string> v6{ 10 };
	vector<string> v7{ 10,"hi" };

	cout <<"v1size:"<<v1.size()<<endl<<
		"   v1:"<<endl;
	while (v1.size()!=0)
	{
		decltype(v1.size()) i = 0;
		i++;
		cout << "v1" << v1[i];
		if (i == v1.size())
		break;
	}
	cout << endl;
	cout << "v2size:" << v2.size() << endl;
	{
		decltype(v2.size()) i = 0;

		while (i < v2.size()) {
			cout << "   v2:" << v2[i] << endl;
			i++;
		}
	}
		
	cout << endl;
	cout << "v3size:" << v3.size() <<endl;
	{
		decltype(v3.size()) i = 0;
		while (i < v3.size())
		{			
			cout << "   v3:" << v3[i]<<endl;
			i++;
		}
	}
	
	cout << endl; 
	cout << "v4size:" << v4.size() <<endl;
	{
		decltype(v4.size()) i = 0;
		while (i < v4.size())
		{
			cout << "   v4:" << v4[i]<<endl;
			i++;
		}
	}
	
	cout << endl;
	cout << "v5size:" << v5.size() << endl;

	{
		decltype(v5.size()) i = 0;
		while (i<v5.size())
		{
			cout << "   v5:" << v5[i]<<endl;
			i++;
		}
	}
	cout << endl;
	cout << "v6size:" << v6.size() << endl;

	{		
		decltype(v6.size()) i = 0;
		while (i<v6.size())
			{
				cout << "   v6:" << v6[i]<<endl;
				i++;
			}
	}
	cout << endl;
	cout << "v7size:" << v7.size() << endl;

	{
		decltype(v7.size()) i = 0;
		while (i<v7.size())
		{			
			cout << "   v7:" << v7[i]<<endl;
			i++;
		}
	}
	return 0;
}