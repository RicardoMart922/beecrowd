#include <iostream>

using namespace std;

#define ll long long

int n, tel[100005][2]; // tel -> telespectador

ll k;

ll sumT(ll t) {
    ll sum = 0;
    for(int i=1; i<=n && sum < k; i++){
        sum += (t < tel[i][0])? 0 : 1+(t - tel[i][0])/tel[i][1];
    }
    return sum;
}

ll solve() {
    ll l=0, r = (ll)(2*1e18), m, ans=-1;
    while (l<=r) {
        m = l + (r-l)/2;
        if(sumT(m) >= k){
            ans = m;
            r = m-1;
        }
        else
            l = m+1;
    }
    return ans;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL); // deixar (I/O) + rápidos
    
    cin >> n >> k;
    
    for(int i=1; i<=n; i++) 
        cin >> tel[i][0] >> tel[i][1];
    
    cout << solve() << '\n';
    
    return 0;
}