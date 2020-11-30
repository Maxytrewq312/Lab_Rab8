
#include <iostream>
#include <time.h>
#include <clocale>
using namespace std;

int main()
{
    setlocale(0, "");
    cout << "Введите размер массива ";
    int* a = new int[10];
    srand((unsigned)time(0));
    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % 10;
        cout << a[i] << " ";
    }
    cout << "\n";
    int x = 0;
    for (int i = 0; i < 10; i++)
    {
        a[x] = a[i];
        if (a[i] % 2 != 0) x++;
    }
    for (int i = x; i < 10; i++)
        a[i] = 0;
    for (int i = 0; i < x; i++)
        cout << a[i] << " ";

    system("pause");
}
