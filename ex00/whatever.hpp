#ifndef WHATEVER_HPP
#define WHATEVER_HPP

//The only requirement is that 
//the two arguments must have the same type 
//and must support all the comparison operators.

template <typename T>
void swap(T& a, T& b) {
  T temp;

  temp = a;
  a = b;
  b = temp;
}

template <typename T>
const T& min(const T& a, const T& b) {
	if (a < b)
		return a;
	else /* (a >= b)*/
		return b;
}

template <typename T>
const T& max(const T& a, const T& b) {
	if (a > b)
		return a;
	else /* (a <= b) */
		return b;
}

#endif  // WHATEVER_HPP
