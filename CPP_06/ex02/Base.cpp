/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 17:28:04 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/25 10:43:38 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::Base() {}

Base::~Base() {}

Base* generate()
{
	int random = rand() % 3;
	Base* obj;
	if (random == 0)
	{
		std::cout << "Generated: A" << std::endl;
		obj = new A();
	}
	else if (random == 1)
	{
		std::cout << "Generated: B" << std::endl;
		obj = new B();
	}
	else
	{
		std::cout << "Generated: C" << std::endl;
		obj = new C();
	}
	return obj;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Identify: A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Identify: B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Identify: C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void identify(Base &p)
{
    try
    {
        (void)dynamic_cast<A &>(p);
        std::cout << "Identify: A" << std::endl;
        return;
    }
    catch (const std::exception &e) {}
    try
    {
        (void)dynamic_cast<B &>(p);
        std::cout << "Identify: B" << std::endl;
        return;
    }
    catch (const std::exception &e) {}
    try
    {
        (void)dynamic_cast<C &>(p);
        std::cout << "Identify: C" << std::endl;
        return;
    }
    catch (const std::exception &e) {}
}
