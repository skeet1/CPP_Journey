/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkarim <mkarim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 19:39:09 by mkarim            #+#    #+#             */
/*   Updated: 2022/11/26 16:59:31 by mkarim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// int main()
// {
//     int arr[] = {1, 2, 3, 4, 5};
//     char str[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//     iter(arr, 5, print);
//     iter(str, 6, print);
//     return 0;
// }


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