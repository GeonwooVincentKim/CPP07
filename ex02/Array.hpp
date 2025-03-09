/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: geonwkim <geonwkim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:10:20 by geonwkim          #+#    #+#             */
/*   Updated: 2025/03/09 21:43:15 by geonwkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept> // 例外処理用

template <typename T>
class Array {
private:
    T* data;
    unsigned int len;

public:
    // デフォルトコンストラクタ
    Array() : data(NULL), len(0) {}

    // 引数付きコンストラクタ
    Array(unsigned int n) : len(n) {
        data = new T[n](); // new[] を使用し、デフォルト値で初期化
    }

    // コピーコンストラクタ（深いコピー）
    Array(const Array& other) : len(other.len) {
        data = new T[len];
        for (unsigned int i = 0; i < len; i++)
            data[i] = other.data[i];
    }

    // 代入演算子（深いコピー）
    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] data; // 既存のメモリを解放
            len = other.len;
            data = new T[len];
            for (unsigned int i = 0; i < len; i++)
                data[i] = other.data[i];
        }
        return *this;
    }

    // デストラクタ（メモリ解放）
    ~Array() {
        delete[] data;
    }

    // [] 演算子のオーバーロード（境界チェックあり）
    T& operator[](unsigned int index) {
        if (index >= len)
            throw std::out_of_range("Index out of range");
        return data[index];
    }

    // 定数バージョンの [] 演算子（const 対応）
    const T& operator[](unsigned int index) const {
        if (index >= len)
            throw std::out_of_range("Index out of range");
        return data[index];
    }

    // size() メソッド
    unsigned int size() const {
        return len;
    }
};

#endif
