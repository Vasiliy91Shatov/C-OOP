// LS 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <clocale>

// Задание 1
class Power
{
private:
    // 2 вещественные пременные со значениями по умолчинию
    int x = 0;
    int y = 0;
public:
    
    // Присвоение новых значений
    void set(int nx, int ny)
    {
        x = nx;
        y = ny;
    }
    // Возведение x в степень y
    void calculate()
    {
        if (x == 0 and y == 0)
        {
            std::cout << "0 в степени 0 = парадокс" << std::endl; 
        }
        else if (x == 0)
        {
            std::cout << x << " в степени " << y << " = 0" << std::endl;
        }
        else if (y == 0)
        {
            std::cout << x << " в степени " << y << " = 1" << std::endl;
        }
        else
        {
            // Переменная для врзведения в степень
            int xx = x;
            for (int i = 1; i < y; i++)
            {
                xx = xx * x;
            }
            std::cout << x << " в степени " << y << " = " << xx << std::endl;
        }
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    
}

