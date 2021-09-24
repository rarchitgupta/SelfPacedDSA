void KthBitIsSet(int n, int k)
{
    if (n & (1 << (k - 1)) != 0)
        cout << "Bit is set" << endl;
    else
        cout << "Bit is not set" << endl;
}