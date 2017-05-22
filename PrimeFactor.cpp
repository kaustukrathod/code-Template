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
void findPrimeFactor(ll n,vector<ll> &d){
	bool a[n+1];
	ll pf[n+1];
	pf[0]=0;
	pf[1]=1;
	make1(a);
	a[0]=false;
	a[1]=false;
	for(ll i=2;i<=n;i++){
		if(a[i]){
			pf[i]=i;
			for(ll j=i*i;j<=n;j=j+i){
				a[j]=false;
				pf[j]=i;
			}
		}
	}
	while(n>1){
		d.pb(pf[n]);
		ll y=n;
		while(y%pf[n]==0)
			y=y/pf[n];
		n=y;
	}
}
int main()
{
	fast_cin();
	ll n;
	cin>>n;
	vector<ll> primeFactor;
	findPrimeFactor(n,primeFactor);
	tr(primeFactor,it){
		cout<<*it<<" ";
	}
	return 0;
}
