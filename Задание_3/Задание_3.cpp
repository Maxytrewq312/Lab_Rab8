#include <iostream>
#include <time.h>
#include <clocale>

using namespace std;

int main()
{
    setlocale(0, "");
    int mas[10];
    int a = 0;
    srand((unsigned)time(0));
    cout << "Начальный массив" << endl;
    for (int i = 0; i < 10; i++)
    {
        mas[i] = rand() % 10;
        cout << mas[i] << " ";
    }
    int min = mas[0];
    for (int i = 0; i < 10; i++)
    {
        if (min > mas[i])
        {
            min = mas[i];
            a = i;
        }

    }
    cout << "\n";
    cout << "Минимальный элемент: " << min << " Его порядковый номер: " << a << "\n";
    system("pause");
}
