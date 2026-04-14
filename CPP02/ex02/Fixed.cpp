/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccavalca <ccavalca@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:53:12 by ccavalca          #+#    #+#             */
/*   Updated: 2026/04/14 16:43:40 by ccavalca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


//constructors
Fixed::Fixed() : _value(0)
{
    
}

Fixed::Fixed(const int n)
{
    this->_value = n << _fractionalBits;
}

Fixed::Fixed(const float f)
{
    this->_value = roundf(f * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed& other)
{
    *this = other;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    if (this != &other)
    {
        this->_value = other.getRawBits();
    }
    return *this;
}

//destructor
Fixed::~Fixed()
{
    
}

//public members
int Fixed::getRawBits(void) const 
{
    return this->_value;
}

void Fixed::setRawBits(int const raw) 
{
    this->_value = raw;
}

//to ft
float Fixed::toFloat() const
{
    return (float)this->_value / (float)(1 << _fractionalBits);
}

int Fixed::toInt() const
{
    return this->_value >> _fractionalBits;
}

//operators
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) 
{
    out << fixed.toFloat();
    return out;
}

bool Fixed::operator>(const Fixed& rhs) const
{
    return(this->_value > rhs.getRawBits());
}

bool Fixed::operator<(const Fixed& rhs) const
{
    return(this->_value < rhs.getRawBits());
}

bool Fixed::operator>=(const Fixed& rhs) const
{
    return(this->_value >= rhs.getRawBits());
}

bool Fixed::operator<=(const Fixed& rhs) const
{
    return(this->_value <= rhs.getRawBits());
}

bool Fixed::operator==(const Fixed& rhs) const
{
    return(this->_value == rhs.getRawBits());
}

bool Fixed::operator!=(const Fixed& rhs) const
{
    return(this->_value != rhs.getRawBits());
}
    
Fixed Fixed::operator+(const Fixed& rhs) const
{
    return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed& rhs) const
{
    return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed& rhs) const
{
    return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed& rhs) const
{
    return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed& Fixed::operator++(void)
{
    this->_value++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->_value++;
    return tmp;
}

Fixed& Fixed::operator--(void)
{
    this->_value--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->_value--;
    return tmp;
}

//min/max ft
Fixed& Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return a;
    else
        return b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return a;
    else
        return b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return a;
    else
        return b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
        return a;
    else
        return b;
}
