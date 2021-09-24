// Naive solution, check last bit and remove it
// O(Total no. of bits in number)

int countSet(int n)
{
    int res = 0;
    while (n > 0)
    {
        if ((n & 1) == 1)
            res++;
        n = n >> 1;
    }
}

// Brian Kerningham's
//O(Total no. of set bits)

int countSet(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = n & (n - 1);
        res++;
    }
    return res;
}