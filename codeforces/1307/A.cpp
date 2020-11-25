#include <bits/stdc++.h>
#define ll long long
#define f first
#define s second
using namespace std;
const long long maxn = 100000000000;
ll Ceil(ll a, ll b)
{
    return (a / b) + ((a % b) != 0);
}
/*int sv[1000000]={0};
ll fact[1000007]={0};
void facto() {fact[0]=1;fact[1]=1;for(int i=2;i<100007;i++)fact[i]=(fact[i-1]*i)%mod;}
void sve() {sv[0]=1;sv[1]=1;for(int i=2;i*i<=maxx;i++){if(!sv[i]){for(int j=2*i;j<=maxx;j+=i)sv[j]=1;}}}//0 hai to prime
ll ncr(ll n,ll r) {ll res=1; res=fact[n]; res=(res*(expo(fact[r],mod-2)))%mod; res=(res*(expo(fact[n-r],mod-2)))%mod; return res;}
ll npr(ll n,ll r) {ll res=1; res=fact[n]; res=(res*(expo(fact[n-r],mod-2)))%mod; return res;}*/

int main()
{
  ll t;
  cin>>t;
  while(t--){

   ll n,d;
   cin>>n>>d;
   vector<ll>v(n);
   for(int i=0;i<n;i++) cin>>v[i];
   ll cnt=0,ans=v[0];
   for(int i=1;i<n;i++){
     for(int j=v[i];j>0 ;j--){
         if(cnt+i>d) break;
         else{
           cnt+=i;
           ans++;




         }
     }
  

   }
   cout<<ans<<endl;
  
      
  
}

}