#include <iostream>
#include <cstdlib>
#include "dynamic.hpp"

DynamicArray create_dynamic_array(const double &value, const size_t &length)
{
    DynamicArray arr = {nullptr, 0};
    arr.m_length = length;
    arr.m_data = new double[length];

    for (std::size_t i = 0; i < length; i++)
    {
        arr.m_data[i] = value;
    }

    return arr;
}

void push_back(DynamicArray &array, const double &value)
{
    double *temp = new double[array.m_length + 1];

    for (std::size_t i = 0; i < array.m_length; i++)
    {
        temp[i] = array.m_data[i];
    }

    temp[array.m_length] = value;

    delete[] array.m_data;
    array.m_data = temp;
    array.m_length++;
}

void pop_back(DynamicArray &array)
{
    double *temp = new double[array.m_length - 1];

    for (std::size_t i = 0; i < array.m_length - 1; i++)
    {
        temp[i] = array.m_data[i];
    }

    delete[] array.m_data;
    array.m_data = temp;
    array.m_length--;
}

void print_array(DynamicArray &array)
{
    for (std::size_t i = 0; i < array.m_length; i++)
    {
        std::cout << "INDEX " << i << ": " << array.m_data[i] << "\n";
    }
}