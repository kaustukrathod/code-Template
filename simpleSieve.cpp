#include <bits/stdc++.h>
#define F first
#define S second
#define ll long long
#define ld long double
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end() 
#define tr(c,i) for(auto i = (c).begin(); i != (c).end(); i++) 
#define present(c,x) ((c).find(x) != (c).end()) 
#define cpresent(c,x) (find(all(c),x) != (c).end()) 
#define make0(a) memset(a,0,sizeof(a))
#define make1(a) memset(a,1,sizeof(a))
#define fast_cin() ios_base::sync_with_stdio(0) 

const int mods = 1e9+7;
using namespace std;
void findPrime(ll n,vector<ll> &prime){
	bool a[n+1];
	make1(a);
	a[0]=false;
	a[1]=false;
	for(ll i=2;i<=floor(sqrt(n));i++){
		if(a[i]){
			for(ll j=i*i;j<=n;j=j+i)
				a[j]=false;
		}
	}
	for(ll i=0;i<=n;i++){
		if(a[i])
		prime.pb(i);
	}
}
int main()
{
	fast_cin();
	ll n;
	cin>>n;
	vector<ll> prime;
	findPrime(n,prime);
	tr(prime,it){
		cout<<*it<<" ";
	}
	return 0;
}
