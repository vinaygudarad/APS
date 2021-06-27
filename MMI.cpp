#include <bits/stdc++.h>
using namespace std;
#define M 11

int mmi_brute_force(int y)
{
    int i = 1;
    while(i < M)
    {
        if(((long long)i * y ) % M == 1)
            return i;
        i++;
    }
    return -1;
}

int main()
{
    int y = 7;
    int mmi = mmi_brute_force(y);
    if (mmi == -1)
        printf("MMI does not exist\n");
    else
        printf("MMI is %d\n", mmi);
    return 0;
}