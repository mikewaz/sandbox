#include <gtest/gtest.h>
#include "HM1/HM1_1.h"

TEST(HM1_1_Test, TestMatrix) {
    HM1_1 solver;
    std::vector<std::vector<int>> matrix;

    auto v = 0;
    for (auto i = 0; i < 1000; i++) {
        std::vector<int> row; // Создаем временную строку
        for (auto j = 0; j < 1000; j++) {
            row.push_back(i + j);
        }
        matrix.push_back(row);
    }

    EXPECT_NO_THROW(solver.rows(matrix));
    EXPECT_NO_THROW(solver.rows(matrix));
}

