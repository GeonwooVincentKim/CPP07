/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 20:30:40 by geonwkim          #+#    #+#             */
/*   Updated: 2025/03/09 21:34:10 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

// iter function template (汎用関数オブジェクト対応)
template <typename T, typename F>
void iter(T* array, size_t length, F func) {
    for (size_t i = 0; i < length; i++)
        func(array[i]);  // 各要素に関数適用
}

#endif
