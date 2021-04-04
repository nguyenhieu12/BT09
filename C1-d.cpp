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

char* pad_left(const char a[], const int n, const int len)
{
    if(len < n)
    {
        char* b = new char[n];
        int value = n - len;
        for(int i = 0;i < value;i++)
        {
            b[i] = ' ';
        }
        int pos = 0;
        for(int j = value;j < n;j++)
        {
            b[j] = a[pos];
            pos++;
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
    pad_left(a, n, len);

    return 0;
}

