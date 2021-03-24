#include <iostream>

using namespace std;

int main(){
    int* p = new int;
    int a = 5;
    *p = a;
    cout << *p << endl;
    delete p;
    cout << *p; // sau khi delete, p trỏ đến một giá trị rác
    return 0;
}

