/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 15:37:27 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/24 17:23:08 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data d;
	d.i = 42;
	d.str = "Hola mundo";

	std::cout << "Original: i= " << d.i << ", str= " << d.str << std::endl;

	uintptr_t raw = Serializer::serialize(&d);
	std::cout << "Serialized pointer value: " << &d << " -> " << raw << std::endl;

	Data* pd = Serializer::deserialize(raw);
	std::cout << "Deserialized pointer value: " << raw << " -> " << pd << std::endl;
	std::cout << "Deserialized: i= " << pd->i << ", str= " << pd->str << std::endl;

	return 0;
}
