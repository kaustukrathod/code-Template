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
const int mod = 1e9+7;
/*Properties
 * (A+B)%C=(A%C+B%C)%C
 * (A-B)%C=((A%C)-(B%C)+C)%C
 * (A*B)%C=((A%C)*(B%C))%C
 * (A/B)%C=((A%C)*(B^-1%C))%C
 * B^-1=INVERSE MODULO OF B & C 
 * */
using namespace std;
ll doModulePower(ll base,ll power,ll modu){
	ll b=1;
	ll a=base%modu;
	ll ans=1;
	while(power){
		if(b&power){
			ans=(ans*a)%modu;
		}
		a=(a*a)%modu;
		cout<<a<<endl;
		power=power>>1;
	}
return ans;
}
void extendedEuclid(ll a,ll b,ll &x,ll &y){
	if(b==0){
		x=1;
		y=0;
	}
	else{
		extendedEuclid(b,a%b,x,y);
		ll temp=x;
		x=y;
		y=temp-(a/b)*(y);
	}
}
void inverseModule(ll a,ll b,ll &x,ll &y){
	extendedEuclid(a,b,x,y);
	if(x<0)
	x=x+b;
	x=x%b;
}
int main()
{
    fast_cin();
    ll a,b,c;
    cin>>a;
    b=mod;
    //cout<<b<<endl;
    ll x,y;
    inverseModule(a,b,x,y);
    cout<<x;
    return 0;
}
