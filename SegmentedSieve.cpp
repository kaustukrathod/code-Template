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
	ll limit=floor(sqrt(n));
	bool a[limit+1];
	vector<ll> base;
	make1(a);
	for(ll i=2;i<=floor(sqrt(limit));i++){
		if(a[i]){
			for(ll j=i*i;j<=limit;j=j+i){
				a[j]=false;
			}
		}
	}
	for(ll i=2;i<=limit;i++){
		if(a[i]){
			base.pb(i);
			prime.pb(i);
		}
	}
	ll low=limit;
	ll high=2*limit;
	while(low<n){
		bool a[limit+1];
		make1(a);
		//cout<<a[0];
		for(ll i=0;i<base.size();i++){
			ll p=(low/base[i])*base[i];
			if(p<low)
			p=p+base[i];
			//cout<<p<<endl;
			for(ll j=p;j<=high;j=j+base[i]){
				a[j-low]=false;
			}
		}
		for(ll i=low+1;i<=high;i++){
			if(a[i-low])
			prime.pb(i);
		}
		low+=limit;
		high+=limit;
		if(high>n)
		high=n;
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
