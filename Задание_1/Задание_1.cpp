#include <iostream>
#include <time.h>
#include <clocale>

using namespace std;

int main()
{
    setlocale(0, "");
    int a, b;
    int mas[10];
    srand((unsigned)time(0));
    cout << "Начальный массив" << endl;
    for (int i = 0; i < 10; i++)
    {
        mas[i] = rand() % 9 + 1;
        cout << mas[i] << " ";
    }
    cout << "\nИнтервал от a до b включительно...\n";
    cout << "Введите a ";
    cin >> a;
    cout << "Введите b ";
    cin >> b;
    for (int i = 0; i < 10; i++)
    {
        if ((mas[i] >= a) && (mas[i] <= b))
            mas[i] = 0;
    }
    cout << "Итоговый массив: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << mas[i] << " ";
    }
    system("pause");
}
