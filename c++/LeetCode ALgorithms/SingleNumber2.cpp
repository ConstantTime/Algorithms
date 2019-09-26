#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair < int , pair < int , int > > mp;

#define rep(i , j , n) for(long long i = j ; i <= n ; i++)
#define per(i , j , n) for(long long i = j ; i >= n ; i--)
 
const ll N = 153456;
const ll mod = 1e18 + 7;
const ld eps = 1e-6;
const ld pi = 3.1415926535;

class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int n = arr.size();
        int common = 0;
        int ones = 0;
        int twos = 0;
        rep(i , 0 , n - 1) {
            twos = twos | (ones & arr[i]);  
            ones = ones ^ arr[i];  
            common = ~(ones & twos);  
            ones &= common;  
            twos &= common;
        }
        return ones;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    cout << fixed << setprecision(12);

   
    
    return 0;
}
