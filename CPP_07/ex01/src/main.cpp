/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcampos- <pcampos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 18:13:02 by pcampos-          #+#    #+#             */
/*   Updated: 2023/05/15 16:28:26 by pcampos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void printten(int const &n)
{
	std::cout << n * 10 << std::endl;
}

void printcap(char const &c)
{
	std::cout << static_cast<char>(c - ('a' - 'A')) << std::endl;
}

int main()
{
	int array[] = {1,2,3,4,5,6,7,8,9};
	iter<int>(array, 9, printten);

	char array2[] = {'a','z','b','p','r','y','u','f','g'};
	iter<char>(array2, 9, printcap);
}

/*
class Awesome
{
public:
Awesome( void ) : _n( 42 ) { return; }
int get( void ) const { return this->_n; }
private:
int _n;
};
std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
template< typename T >
void print( T const & x ) { std::cout << x << std::endl; return; }
int main() {
int tab[] = { 0, 1, 2, 3, 4 }; // <--- I never understood why you can't write int[] tab. Wouldn't that make more sense?
Awesome tab2[5];
iter( tab, 5, print );
iter( tab2, 5, print );
return 0;
}
*/