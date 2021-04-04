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

char* trim_left(const char a[], const int len)
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
         int pos = 0;
         for(int j = count;j < len;j++)
         {
             b[pos] = a[j];
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
    trim_left(a , len);

    return 0;
}

