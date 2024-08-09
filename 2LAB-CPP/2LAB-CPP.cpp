#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    int mav, sum, i, j, a[3][3], b[3];
    sum = 0;
    setlocale(0, "Russian");
    srand(time(0));
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            a[i][j] = rand() % 25;
    std::cout << "Матрица A[3][3]";
    for (i = 0; i < 3; i++)
    {
        std::cout << "\n";
        for (j = 0; j < 3; j++)
        {
            std::cout.width(3);
            std::cout << a[i][j];
        }
    }
    mav = a[0][0];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (mav < a[i][j])
                mav = a[i][j];
        }
        b[i] = mav;
        sum = sum + mav;
        mav = 0;
    }
    std::cout << "\n" << "Сумма наибольших значений элементов всех строк: " << sum << "\n";
    system("pause");
}
