/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 18:54:40 by geonwkim          #+#    #+#             */
/*   Updated: 2025/03/09 18:55:04 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include<iostream>

template<typename T>
void swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T min(const T &a, const T &b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>
T max(const T &a, const T &b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

#endif