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
        mas[i] = rand() % 10;
        cout << mas[i] << " ";
    }
    cout << "\nИнтервал от a до b включительно...\n";
    cout << "Введите a ";
    cin >> a;
    cout << "Введите b ";
    cin >> b;
    if (a < b)
        swap(b, a);
    cout << "Не попадают под интервал элементы: ";
    for (int i = 0; i < 10; i++)
    {
        if ((mas[i] >= b) && (mas[i] <= a))
        {
            i++;
        }
        else
        {
            cout << mas[i] << " ";
        }
    }
    system("pause");
}
