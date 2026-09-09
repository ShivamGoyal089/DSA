class Solution {
public:
    int countCommas(int n) {
        if(n<1000){
            return 0;
        }
        int ans = 0;
        int start = 1000;
        int commas = 1;
        while(start <= n){
            int end = start*1000-1;
            int last = min(n,end);
            int nums = last - start + 1;
            ans += nums*commas;
            start *= 1000;
            commas++;
        }
        return ans;
    }
};