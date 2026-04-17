/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/17 09:14:49 by carolinamc        #+#    #+#             */
/*   Updated: 2026/04/17 17:01:24 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

#define MAX_IDEAS 100

class Brain {

	private:
		std::string ideas[MAX_IDEAS];

	public:
		Brain();
		Brain( const Brain& other );
		Brain& operator=( const Brain& other );
		~Brain();
		
		void	getIdea( int index );
		void	addIdea( std::string idea, int index );
		void	printIdeas( void );
};
