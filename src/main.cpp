#include <iostream>
#include <string>

int main()
{
    std::string direction;
    double temperature;

    if (!(std::cin >> direction))
    {
        std::cout << "Invalid input\n";
        return 0;
    }

    if (direction != "C2F" && direction != "F2C")
    {
        std::cout << "Unsupported direction\n";
        return 0;
    }

    if (!(std::cin >> temperature))
    {
        std::cout << "Invalid input\n";
        return 0;
    }

    if (direction == "C2F")
    {
        std::cout << temperature * 9 / 5 + 32 << " F\n";
    }
    else
    {
        std::cout << (temperature - 32) * 5 / 9 << " C\n";
    }
    return 0;
}
