class Solution {
public:
    int solve(int n ,int k){
        if(n == 1){
            return 0 ;
        }
        else{
            return (solve(n-1 , k) + k ) % n ;
        }
    }
    int findTheWinner(int n, int k) {
        int ans = 1 + solve(n , k);
        return ans;
    }
};