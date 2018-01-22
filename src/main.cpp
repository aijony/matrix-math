#include "matrixmath.hpp"
#include <iostream>



int main()
{

  const int rows = 3;
  const int columns = 2;
  
  //Create 2D array
  double toMatrixA[rows][columns] = {
     {1, 2},
     {3, 4},
     {5, 6}
    };

  double toMatrixB[columns][rows] = {
    {1, 3, 2},
    {3, 3, 4}
  };



  //Convert to Matrix
  Matrix *matrix1 = new Matrix(toMatrixB[0], columns, rows);
  Matrix *matrix2 = new Matrix(toMatrixA[0], rows, columns);
  Matrix *matrix3 = MatrixMath::multiply(matrix1, matrix2);


  MatrixMath::printMatrix(matrix3);



}
