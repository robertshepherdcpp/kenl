#pragma once

#include<iostream>
#include<cmath>

namespace knl
{
    template<char down = '|', char accross = '_', char slash_f = '/', char slash_b = '\\', char space = ' '>
    auto print_triangle(int base, int height) -> void
    {
        // auto hypotenuse = std::sqrt((base * base) + (height * height));

        for (int i = base; i > 0; i--)
        {
            for (int j = 0; j < i; j++)
            {
                std::cout << space;
            }
            std::cout << slash_f;
            for (int j = 0; j < ((base - i) + (base - i)); j++)
            {
                std::cout << space;
            }
            std::cout << slash_b << "\n";
        }
        std::cout << slash_f;
        for (int i = 0; i < base; i++)
        {
            std::cout << accross << space;
        }
        std::cout << slash_b << "\n";
    }

    template<char down = '|', char accross = '-', char space = ' ', char slash_b = '\\'>
    auto print_rectangle(int base, int height)
    {
        std::cout << down;
        for (int i = 0; i < base; i++)
        {
            std::cout << accross << space << space;
        }
        std::cout << down;
        std::cout << "\n";

        for (int i = 1; i < height - 1; i++)
        {
            std::cout << down << "\n";
            std::cout << down;
            for (int j = 0; j < height; j++)
            {
                std::cout << space << space;
            }
            std::cout << down;
            std::cout << "\n";
        }
        std::cout << down;
        for (int i = 0; i < base; i++)
        {
            std::cout << accross << space << space << space;
        }
        std::cout << down << "\n";

    }

    template<char down = '|', char accross = '-', char space = ' ', char slash_b = '\\'>
    auto print_square(int base)
    {
        int height = base;
        std::cout << down;
        for (int i = 0; i < base; i++)
        {
            std::cout << accross << space;
        }
        std::cout << down;

        for (int i = 1; i < height - 1; i++)
        {
            std::cout << down << "\n";
            std::cout << down;
            for (int j = 0; j < height; j++)
            {
                std::cout << space << space;
            }
            std::cout << down;
            std::cout << "\n";
        }
        std::cout << down;
        for (int i = 0; i < base; i++)
        {
            std::cout << accross << space;
        }
        std::cout << down << "\n";

    }
} // namespace pse