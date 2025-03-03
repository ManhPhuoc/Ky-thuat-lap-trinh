#include<bits/stdc++.h>
using namespace std;
long long giaithua(int n)
{
	int tmp = 1;
	for(int i = 1; i<=n; i++){
		tmp *= i;
	}
	return tmp;
}
long long tohop(int n, int k)
{
	if(k > n)
		return 0;
	return giaithua(n) / (giaithua(k) * giaithua(n-k));
}
int main()
{
	int n,k; cin>>n>>k;
	cout<<tohop(n,k);
return 0;
}
