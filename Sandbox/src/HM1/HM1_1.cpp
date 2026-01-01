//
// Created by marks on 01.01.2026.
//

#include "HM1_1.h"

#include <chrono>
#include <iostream>

void dl_log(const std::chrono::time_point<std::chrono::system_clock> start, const std::chrono::time_point<std::chrono::system_clock> end) {
    const auto elapsed = end - start;
    std::cout << "Затраченное время: " << elapsed.count() << " мс" << std::endl;
}

void HM1_1::rows(const std::vector<std::vector<int>>& matrix) {
    const auto start = std::chrono::high_resolution_clock::now();
    long long sum = 0;

    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            sum += matrix[i][j];
        }
    }

    const auto end = std::chrono::high_resolution_clock::now();
    dl_log(start, end);
}

void HM1_1::columns(const std::vector<std::vector<int>>& matrix) {
    const auto start = std::chrono::high_resolution_clock::now();
    long long sum = 0;

    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            sum += matrix[j][i];
        }
    }

    const auto end = std::chrono::high_resolution_clock::now();
    dl_log(start, end);
}