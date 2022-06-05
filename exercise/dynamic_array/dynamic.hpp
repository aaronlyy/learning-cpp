#pragma once
#include <cstdlib>

struct DynamicArray {
    double *m_data;
    size_t m_length;
};

/*
* @brief Create a new dynamic array.
*
* @param value Value to fill the array with
* @param length Length of the new array
*/
DynamicArray create_dynamic_array(const double &value, const size_t &length);


void push_back(DynamicArray &array, const double &value);


void pop_back(DynamicArray &array);

/*
* @brief Print the dynamic array
*
* @param array A DynamicArray object
*/
void print_array(DynamicArray &array);


