#include "matrix.hpp"


double Matrix::get_index(int row, int column) {
  return (Matrix::get_matrices()[Matrix::sizeX * row + column]);
}

Matrix::Matrix(double* inputArray, int y, int x)
  : matrices(inputArray), sizeY(y), sizeX(x) {

}

