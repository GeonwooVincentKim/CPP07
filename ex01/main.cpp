/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 20:28:20 by geonwkim          #+#    #+#             */
/*   Updated: 2025/03/09 21:36:55 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

// 関数1: 値を表示する（関数ポインタ使用）
void printInt(int& n) {
    std::cout << n << " ";
}

// 関数2: 定数参照で表示（const対応）
void printConstInt(const int& n) {
    std::cout << n << " ";
}

// 関数3: 文字列を大文字にする（関数オブジェクト）
struct ToUpper {
    void operator()(std::string& str) {
        for (size_t i = 0; i < str.size(); i++)
            str[i] = std::toupper(str[i]);
    }
};

// **関数4: 文字列を表示する関数ポインタ**
void printString(const std::string& s) {
    std::cout << s << " ";
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    std::cout << "Integer array: ";
    iter(arr, 5, printInt);
    std::cout << std::endl;

    std::cout << "Integer array (const): ";
    iter(arr, 5, printConstInt);
    std::cout << std::endl;

    std::string strArr[] = {"hello", "world", "cpp"};
    iter(strArr, 3, ToUpper());  // 関数オブジェクトで大文字変換
    std::cout << "Modified string array: ";
    iter(strArr, 3, printString);  // 関数ポインタを使用
    std::cout << std::endl;

    return 0;
}
