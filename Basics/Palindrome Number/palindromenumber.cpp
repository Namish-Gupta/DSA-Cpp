class Solution {
public:
    bool isPalindrome(int x) {
        long long s = 0;
        bool p = false;
        int k = x;
        while(x>0)
        {
            int d = x%10;
            s = s*10 + d;
            x /= 10;
        }
        if(s>=INT_MIN && s<=INT_MAX) 
        {
            if(k==s && k>=0) p = true;
        }
        return p;
    }
};