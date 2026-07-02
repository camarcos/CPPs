/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carolinamc <carolinamc@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 11:20:57 by carolinamc        #+#    #+#             */
/*   Updated: 2026/07/02 10:20:52 by carolinamc       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void	swap( T& a, T& b )
{
	T c = a;
	a = b;
	b = c;
}

template<typename T>
T	min( T a, T b )
{
	if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>
T	max( T a, T b )
{
	if (a > b)
		return (a);
	else
		return (b);
}
