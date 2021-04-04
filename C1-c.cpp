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

char* pad_right(const char a[], const int n, const int len)
{
    if(len < n)
    {
        char* b = new char[n];
        for(int i = 0;i < len;i++)
        {
            b[i] = a[i];
        }
        for(int j = len;j < n;j++)
        {
            b[j] = ' ';
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
    pad_right(a , n, len);

    return 0;
}

