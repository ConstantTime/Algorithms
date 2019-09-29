#include <bits/stdc++.h>
 
using namespace std;
  
typedef long long ll;
typedef long double ld;
typedef pair < int , pair < int , int > > mp;

#define rep(i , j , n) for(long long i = j ; i <= n ; i++)
#define per(i , j , n) for(long long i = j ; i >= n ; i--)
 
const long long N = 153456;
const long long mod = 1e18 + 7;
const long double eps = 1e-6;
const long double pi = 3.1415926535;

class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& a) {
        int n = a.size();
        map < int , int > ans;
        for(auto j : a) ans[j]++;
        vector < pair < int , int > > res;
        for(auto j : ans) {
            res.push_back({j.second , j.first});   
        }
        sort(res.begin() , res.end() , greater < pair < int , int > >());
        
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    cout << fixed << setprecision(12);

   
    
    return 0;
}
