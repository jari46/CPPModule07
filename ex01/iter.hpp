#ifndef ITER_HPP
#define ITER_HPP

#include <cstddef>
#include <iostream>
#include <string>

//• The first parameter is the address of an array.
//• The second one is the length of the array.
//• The third one is a function that will be call on every element of the array.
//    The third parameter can be an instantiated function template.

template <typename T>
void iter(T* arr, std::size_t len, void (*f)(const T&)) {
  for (std::size_t i = 0 ; i < len ; ++i)
    f(arr[i]);
  std::cout << std::endl;
}

template <typename T>
void print(const T& arg) {
  std::cout << arg << "\n";
}

#endif  // ITER_HPP
