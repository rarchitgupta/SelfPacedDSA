/*
Naive approach - This solves the problem in O(n) time
*/
bool isPrime(int N)
{
    int i;
    for (i = 2; i <= N / 2; i++)
    {
        if (N % i == 0)
            return false;
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

bool isPrime(int N)
{
    int i;
    for (i = 2; i * i <= N; i++)
    {
        if (N % i == 0)
            return false;
    }
    return true;
}

/*
Further optimization: Check if n%2==0 and n%3==0
Saving a lot of iterations
*/

bool isPrime(int N)
{
    if (N == 1)
        return false;
    if (N == 2 || N == 3)
        return true;
    if (N % 2 == 0 || N % 3 == 0)
        return false;
    int i;
    for (i = 5; i * i <= N; i = i + 6)
    {
        if (N % i == 0 || N % (i + 2) == 0)
            return false;
    }
    return true;
}