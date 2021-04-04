#include <iostream>

using namespace std;

int getLenght(const char a[])
{
    int count = 0;
    while(a[count] != '\0')
    {
        count++;
    }

    return count;
}

char* truncate(const char a[], const int n, const int len)
{
    if(len > n)
    {
        char* b = new char[n];
        for(int i = 0;i < n;i++)
        {
            b[i] = a[i];
        }

        return b;
    }
}

int main()
{
    char* a = new char[1000];
    cin >> a;
    int len = getLenght(a);
    int n;
    cin >> n;
    truncate(a, n, len);

    return 0;
}

