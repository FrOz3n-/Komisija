#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool op(int n,int p)
{
	return n>p;
}
int main()
{
	vector<int> vec;
	int n,k;
	cin >> n;
	cin >> k;
	for(int i=0;i<n;i++)
	{
		int t;
		cin >> t;
		vec.push_back(t);
	}
	sort(vec.begin(),vec.end(),op);
	int i=vec[k-1];
	int count=0;
	while(i>vec[k])
	{
		count++;
		i--;
	}
	cout << count;
	return 0;
}