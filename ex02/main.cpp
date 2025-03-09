/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:28:45 by geonwkim          #+#    #+#             */
/*   Updated: 2025/03/09 21:43:49 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main() {
    try {
        // 空の配列
        Array<int> emptyArray;
        std::cout << "Size of emptyArray: " << emptyArray.size() << std::endl;

        // 5個の要素を持つ配列
        Array<int> intArray(5);
        for (unsigned int i = 0; i < intArray.size(); i++)
            intArray[i] = i * 10;

        // 配列の内容を表示
        std::cout << "intArray: ";
        for (unsigned int i = 0; i < intArray.size(); i++)
            std::cout << intArray[i] << " ";
        std::cout << std::endl;

        // 深いコピーのテスト
        Array<int> copiedArray = intArray;
        copiedArray[2] = 999; // オリジナルには影響しない

        std::cout << "Copied intArray after modification: ";
        for (unsigned int i = 0; i < copiedArray.size(); i++)
            std::cout << copiedArray[i] << " ";
        std::cout << std::endl;

        std::cout << "Original intArray remains unchanged: ";
        for (unsigned int i = 0; i < intArray.size(); i++)
            std::cout << intArray[i] << " ";
        std::cout << std::endl;

        // 範囲外アクセスのテスト
        std::cout << "Accessing out of bounds element: " << intArray[10] << std::endl;

    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
