#define ll long long
class Solution {
public:
    int minimizeSet(int divisor1, int divisor2, int uniqueCnt1, int uniqueCnt2) {
        ll l=1, r=INT_MAX, ans = INT_MAX;

        binarySearch(l, r, divisor1, divisor2, uniqueCnt1, uniqueCnt2, ans);
        return ans;
    }
    ll binarySearch(ll l, ll r, ll divisor1, ll divisor2, ll uniqueCnt1, ll uniqueCnt2, ll& ans) {
        if(l<=r) {
            ll m = l + (r-l)/2;
            ll a = m-(m/divisor1);
            ll b = m-(m/divisor2);
            ll c = m-(m/lcm(divisor1, divisor2));

            if(a>=uniqueCnt1 && b>=uniqueCnt2 && c>=uniqueCnt1+uniqueCnt2) {
                ans = min(ans, m);
                return binarySearch(l, m-1, divisor1, divisor2, uniqueCnt1, uniqueCnt2, ans);
            }
            else {
                return binarySearch(m+1, r, divisor1, divisor2, uniqueCnt1, uniqueCnt2, ans);
            }
        }
        return -1;
    }
};
