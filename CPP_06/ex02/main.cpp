/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 17:26:40 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/24 18:20:56 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

int main()
{
	std::srand(static_cast<unsigned int>(std::time(nullptr)));
	int i = 0;
	while (i < 5)
	{
		Base* b = generate();
		identify(b);
		identify(*b);
		delete b;
		++i;
	}
	return 0;
}
