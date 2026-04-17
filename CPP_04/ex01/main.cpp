/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 09:16:56 by carolinamc        #+#    #+#             */
/*   Updated: 2026/04/17 15:07:34 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

#define NUMBER_ANIMAL 4

int main()
{
	std::cout << "--- Array of Animals ---" << std::endl;
	const Animal *animals[NUMBER_ANIMAL];
	for (int i = 0; i < NUMBER_ANIMAL / 2; i++)
		animals[i] = new Dog();
	for (int i = 0; i < NUMBER_ANIMAL / 2; i++)
		animals[i + NUMBER_ANIMAL / 2] = new Cat();
	for (int i = 0; i < NUMBER_ANIMAL; i++)
		delete animals[i];

	std::cout << std::endl << "--- Deep copy: assignment operator ---" << std::endl;
	Dog *dog = new Dog();
	dog->getIdea()->setIdea("hungry", 0);
	Dog *dog2 = new Dog();
	*dog2 = *dog;
	dog->getIdea()->setIdea("changed", 0);
	std::cout << "dog2 idea: " << dog2->getIdea()->getIdeas(0) << std::endl;
	std::cout << "dog  idea: " << dog->getIdea()->getIdeas(0) << std::endl;
	delete dog;
	delete dog2;

	std::cout << std::endl << "--- Deep copy: copy constructor ---" << std::endl;
	Dog basic;
	basic.getIdea()->setIdea("original idea", 0);
	{
		Dog tmp = basic;
		std::cout << "tmp idea: " << tmp.getIdea()->getIdeas(0) << std::endl;
		tmp.getIdea()->setIdea("tmp changed", 0);
		std::cout << "tmp idea after change: " << tmp.getIdea()->getIdeas(0) << std::endl;
	}
	std::cout << "basic idea after tmp destroyed: " << basic.getIdea()->getIdeas(0) << std::endl;

	return 0;
}
