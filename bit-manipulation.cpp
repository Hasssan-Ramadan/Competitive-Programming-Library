bool isPowerOfTwo(int x)
{
    return (x && !(x & (x - 1)));
}

int countOnes(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}

bool checkIthBit(int n, int i)
{
    if (n & (1 << i))
        return true;
    else
        return false;
}

char *possibleSubsets(char A[], int N)
{
    char result[1 << N][N];
    for (int i = 0; i < (1 << N); ++i)
    {
        for (int j = 0; j < N; ++j)
            if (i & (1 << j))
                result[i][j] = A[j];
    }
    return *result;
}

// for 16-bit integer
long largestPower(long N)
{
    N = N | (N >> 1);
    N = N | (N >> 2);
    N = N | (N >> 4);
    N = N | (N >> 8);
    return (N + 1) >> 1;
}