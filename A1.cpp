#include <iostream>

using namespace std;

char *concat(const char* a1, const char* a2)
{
    int len1 = 0, len2 = 0;
    while(a1[len1] != '\0')
    {
        len1++;
    }
    while(a2[len2] != '\0')
    {
        len2++;
    }
    char *a3 = new char[len1 + len2 + 1];
    int i = 0;
    while(i < len1)
    {
        a3[i] = a1[i];
        i++;
    }
    int j = 0;
    while(j < len2)
    {
        a3[i] = a2[j];
        j++;
        i++;
    }
    for(int k = 0;k < len1 + len2;k ++)
    {
        cout << a3[k];
    }
    return a3;
}

int main()
{
    char a1[1000];
    char a2[1000];
    cin >> a1;
    cin >> a2;
    concat(a1, a2);
    return 0;
}
