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

char *reverse(const char a[], const int len)
{
    char *b = new char[len];
    for(int i = 0;i < len;i++)
    {
        b[i] = a[len - i - 1];
    }

    return b;
}

int main()
{
    char* a = new char[1000];
    cin >> a;
    int len = getLenght(a);
    reverse(a, len);

    return 0;
}
