/*
Naive approach - This solves the problem in O(n) time
*/
bool isPrime(int N) {
    int i;
    for(i=2;i<=N/2;i++) {
        if(N%i==0) return false;
    }
    return true;
}

/*
Efficient solution - Divisors always appear in pairs
Example: 30 - (1,30), (2,15), (3,10)
if (x,y) is a pair, then x*y = n
Thus if x<=y, x*x <=n
So x<=sqrt(n)

Time complexity: O(sqrt(n))
*/

bool isPrime(int N) {
    int i;
    for(i=2;i*i<=N;i++) {
        if(N%i==0) return false;
    }
    return true;
}