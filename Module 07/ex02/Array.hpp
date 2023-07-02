/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xmatute- <xmatute-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 11:06:27 by xmatute-          #+#    #+#             */
/*   Updated: 2023/07/02 20:06:30 by xmatute-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Array_HPP
# define Array_HPP

#include <exception>

template	<typename T>
class Array
{
private:
	unsigned int	arraySize;
	T				*data;

	bool inBounds(unsigned int n);
	void checkInBounds(unsigned int n);

public:
	/*OCF*/
	Array();
	Array(const Array& to_copy);
	~Array();
	Array& operator=(const Array& to_asign);

	Array(unsigned int n);

	T	&operator[](unsigned int n);

	class OutOfBoundsException : public std::exception
	{public:	const char* what() const throw();};

	unsigned int size() const;
};

/*
** Orthodox Canonical Form
*/
// Default constructor
template	<typename T>
Array<T>::Array() : arraySize(0), data(nullptr)
{}
// Copy constructor
template	<typename T>
Array<T>::Array(const Array& to_copy) : arraySize(to_copy.arraySize), data(new T[arraySize]())
{
	unsigned i = arraySize;
	while (i--)
		data[i] = to_copy.data[i];
}
// Destructor
template	<typename T>
Array<T>::~Array()
{
	delete[] (data);
}
// Copy assignment operator
template	<typename T>
Array<T>& Array<T>::Array::operator=(const Array& to_asign)
{
	delete[] (data);
	arraySize = to_asign.arraySize;
	data = new T[arraySize]();
	unsigned i = arraySize;
	while (i--)
		data[i] = to_asign.data[i];
    return *this;
}


template	<typename T>
Array<T>::Array(unsigned int n) : arraySize(n), data(new T[arraySize]())
{}

template	<typename T>
bool Array<T>::inBounds(unsigned int n)
{
	if (n < arraySize)
		return true;
	return false;	
}

template	<typename T>
void Array<T>::checkInBounds(unsigned int n)
{
	if (!inBounds(n))
		throw OutOfBoundsException();
}

template	<typename T>
const char* Array<T>::OutOfBoundsException::what() const throw()
{return "Array Error: index is out of bounds";}

template	<typename T>
T	&Array<T>::operator[](unsigned int n)
{
	checkInBounds(n);
	return data[n];
}

template	<typename T>
unsigned int Array<T>::size() const
{
	return arraySize;
}

#endif
