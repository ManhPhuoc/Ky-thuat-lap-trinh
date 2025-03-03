#include<bits/stdc++.h>
using namespace std;
int demchuso(int n)
{	
	if(n < 10) 
		return 1;
	return demchuso(n/10) + 1;
}
int main()
{
	int n; cin>>n;
	cout<<demchuso(n);
return 0;
}

