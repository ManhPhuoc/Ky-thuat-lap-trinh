#include<bits/stdc++.h>
using namespace std;
void chuyendoi(int n)
{
	if(n > 1)
		chuyendoi(n/2);
	cout<<n%2<<endl;
}
int main()
{
	int n; cin>>n;
	chuyendoi(n);
return 0;
}
