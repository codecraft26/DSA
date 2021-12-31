#include <bits/stdc++.h>
using namespace std;
bool isHappy(int n)
{
    set<int> myset;
    int val;
    int index;
    while (1)
    {
        val = 0;
        while (n)

        {

            index = n % 10;
            val += index * index;
            n = n / 10;
        }
        if (n == 1)
        {
            return 1;
        }
        else if (myset.find(val) != myset.end())
        {
            return 0;
            myset.insert(val);
            n = val;
        }
        return 0;
    }
}

int main()
{
    int n;
    cin >> n;
    isHappy(n);

    return 0;
}