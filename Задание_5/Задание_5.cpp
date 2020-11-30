#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int array[10][10], a, b;
    cout << "Введите количество строк и столбцов: " << endl;
    cin >> a;
    b = a;
    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
        {
            cin >> array[i][j];
        }
    cout << "Матрица:\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            cout << array[i][j] << "\t";
        cout << endl;
    }
    cout << "\n";
    double sum = 0,
        c = 0;
    double o = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i > j && array[i][j] % 2 == 0)
            {
                sum += array[i][j];
                c++;
            }
        }
    }
    o = sum / c;
    cout << "Ответ: " << o << "\n";
    system("pause");
}