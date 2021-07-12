#include "matrix.h"

TEST(Matrix, Generation) {
    Matrix<int> matrix_1(3, 4);
    std::vector<std::vector<int>> v;
    for (int i = 0; i < 4; ++i) {
      std::vector<int> row(3);
      v.push_back(row);
    }
    Matrix<int> matrix_2(v);
    ASSERT_EQ(matrix_1, matrix_2);
}
