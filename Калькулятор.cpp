#include <iostream>
#include <Windows.h>
#include <cmath>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    setlocale(LC_ALL, "Russian");
    {
            int operation;
            std::cout << "Выберите операцию: 1. Сложение; 2. Вычитание; 3. Частное 4. Произведение; 5. Возведение в степень; 6. Нахождение квадратного корня; 7. Нахождение 1 процента от числа; 8. Факториал числа; 9. Выход;\n";
            cout << "Введите номер операции: ";
            cin >> operation;
            int a, b = 0;
            long float c;
            if (operation == 1 or operation == 2 or operation == 3 or operation == 4)
            {
                cout << "Введите первое число: ";
                cin >> a;
                cout << "Введите второе число: ";
                cin >> b;
            }
            else if (operation == 5)
            {
                cout << "Ведите число: ";
                cin >> a;
                cout << "Введите степень: ";
                cin >> b;
            }
            else if (operation == 6 or operation == 7 or operation == 8)
            {
                cout << "Введите число: ";
                cin >> a;
            }
            switch (operation)
            {
            case 1:
                c = a + b;
                cout << "Ваш ответ равен = " << c << endl;
                break;
            case 2:
                c = a - b;
                cout << "Ваш ответ равен = " << c << endl;
                break;
            case 3:
                c = a * b;
                cout << "Ваш ответ равен = " << c << endl;
                break;
            case 4:
                c = a / b;
                cout << "Ваш ответ равен = " << c << endl;
                break;
            case 5:
                c = pow(a, b);
                cout << "Ваш ответ равен = " << c << endl;
                break;
            case 6:
                c = sqrt(a);
                cout << "Ваш ответ равен = " << c << endl;
                break;
            case 7:
                c = a/100;
                cout << "Ваш ответ равен = " << c << endl;
                break;
            case 8:
                do
                {
                    c = a * a;
                    a--;
                } while (a == 0);
                cout << "Ваш ответ равен = " << c << endl;
                break;
            default:
                std::cout << "Ошибка\n";
                break;
            case 9:
                std::cout << "Конец\n";
                break;
            }
            return 0;
    }
}