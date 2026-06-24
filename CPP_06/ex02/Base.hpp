/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/24 17:28:17 by carolinamc        #+#    #+#             */
/*   Updated: 2026/06/24 18:19:03 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <cstdlib>
#include <ctime>
#include <iostream>

class Base
{
	public:
		Base();
		virtual ~Base();
	};
	
	void identify(Base* p);
	void identify(Base& p);
	Base* generate(void);
