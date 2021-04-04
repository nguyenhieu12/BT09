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

char* delete_char(const char a[], const char b, const int len)
{
    int count = 0;
    for(int i = 0;i < len;i++)
    {
        if(a[i] == b)
           count++;
    }
    char* c = new char[len - count];
    int pos = 0;
    for(int i = 0;i < len;i++)
    {
        if(a[i] != b)
        {
            c[pos] = a[i];
            pos++;
        }
    }

    return c;
}

int main()
{
    char* a = new char[1000];
    cin >> a;
    int len = getLenght(a);
    char b;
    cin >> b;
    int count = 0;
    delete_char(a, b, len);

    return 0;
}

