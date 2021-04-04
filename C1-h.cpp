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

char* trim_right(const char a[], const int len)
{
     int count = 0;
     for(int i = 0;i < len;i++)
     {
         if(a[i] == ' ')
            count++;
     }
     if(count != 0)
     {
         char* b = new char[len - count];
         for(int j = 0;j <len - count;j++)
         {
             b[j] = a[j];
         }

         return b;
     }
}

int main()
{
    char* a = new char[1000];
    cin >> a;
    int len = getLenght(a);
    trim_right(a, len);

    return 0;
}

