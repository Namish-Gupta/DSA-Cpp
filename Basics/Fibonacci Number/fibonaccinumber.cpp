class Solution {
public:
    int fibRecursion(int n) {
        if(n <= 1) return n;
        return fib(n - 1) + fib(n - 2);
    }

    int fibOptimal(int n) {
        if(n==0 || n==1) return n;
        int a = 0, b = 1, sum = 0;
        for(int i = 2; i <= n; i++)
        {
            sum = a + b;
            a = b;
            b = sum;
        }
        return sum;
    }
};