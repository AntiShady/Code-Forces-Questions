#include <iostream>

int main()
{
    int n;
    std::cin >> n;

    int tf = 0, fif = 0; // Count of 25 and 50 ruble bills

    for (int i = 0; i < n; i++)
    {
        int bill;
        std::cin >> bill;

        if (bill == 25)
        {
            tf++;
        }
        else if (bill == 50)
        {
            fif++;
            if (tf > 0)
            {
                tf--;
            }
            else
            {
                std::cout << "NO" << std::endl;
                return 0;
            }
        }
        else if (bill == 100)
        {
            if (fif > 0 && tf > 0)
            {
                fif--;
                tf--;
            }
            else if (tf > 2)
            {
                tf -= 3;
            }
            else
            {
                std::cout << "NO" << std::endl;
                return 0;
            }
        }
    }

    std::cout << "YES" << std::endl;
    return 0;
}
