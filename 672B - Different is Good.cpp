#include<iostream>
#include<set>
using namespace std;
int main()
{
	multiset<char>st;
	set<char>s;
	int n,c=0;
	char ch;
	cin >> n;
	while (n--)
	{
		cin >> ch;
		s.insert(ch);
		st.insert(ch);
	}
	for (auto it=s.begin();it!=s.end(); it++)
	{
		if (st.count(*it) > 1)
			c += st.count(*it)-1;
	}
	if (c + s.size() <= 26)
		cout << c << endl;
	else
		cout << "-1" << endl;
	return 0;
}