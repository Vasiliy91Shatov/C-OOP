// LS 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <clocale>
#include < stdint.h >
#include <cstdint>

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

// Задание 2
class RGBA
{
private:

    // Переменные со значениями по умолчанию
    std::uint16_t m_red   = 0;
    std::uint16_t m_green = 0;
    std::uint16_t m_blue  = 0;
    std::uint16_t m_alpha = 255;

public: 

    // Конструктор с параметрами
    RGBA(std::uint16_t new_red, std::uint16_t new_green, std::uint16_t new_blue, std::uint16_t new_alpha)
    {
        m_red = new_red;
        m_green = new_green;
        m_blue = new_blue;
        m_alpha = new_alpha;
    }

    // Конструктор без параметров
    RGBA()
    {}

    // Вывод на экран переменных
    void print()
    {
        std::cout << "red   = " << m_red << std::endl << "green = " << m_green << std::endl <<  "blue  = " <<
            m_blue << std::endl << "alpha = " << m_alpha;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

}

