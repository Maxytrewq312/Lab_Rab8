#include <iostream>
#include <time.h>
#include <clocale>

using namespace std;

int main()
{
    setlocale(0, "");
    int a, b;
    int max = -10;
    int mas[10];
    srand((unsigned)time(0));
    cout << "Начальный массив" << endl;
    for (int i = 0; i < 10; i++)
    {
        mas[i] = rand() % (0 - 10) - 10;
        cout << mas[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < 10; i++)
    {
        if (mas[i] > max)
            max = mas[i];
    }
    cout << "Максимальное число = " << max << "\n";
    system("pause");
}
