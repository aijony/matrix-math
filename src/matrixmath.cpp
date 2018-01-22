#include "matrixmath.hpp"
#include <iostream>


int MatrixMath::test(int param){
	return param;
}

void MatrixMath::printMatrix(Matrix* input) {
  for(int y = 0; y < input->get_sizeY(); y++){
    for(int x = 0; x < input->get_sizeX(); x++){
      //1D coordinate of 1D casted 2D array
      std::cout << input->get_index(y, x) << " ";
    }
    std::cout << "\n";
  }
}

Matrix* MatrixMath::subtract(Matrix* operand, Matrix* multiplier) {
}

Matrix* MatrixMath::sigmoidPrime(Matrix* input) {
}

Matrix* MatrixMath::sigmoid(Matrix* input) {
}

Matrix* MatrixMath::transpose(Matrix* input) {
}

Matrix* MatrixMath::multiply(Matrix* operand, Matrix* multiplier) {
  double product[multiplier->get_sizeX()][operand->get_sizeY()];

  for (int operandRow = 0; operandRow <  operand->get_sizeX(); operandRow++){
    for (int multiplierColumn = 0; multiplierColumn < multiplier->get_sizeY(); multiplierColumn++) {
      for (int productIndex = 0; productIndex < operand->get_sizeX(); productIndex++){
        //The product equals the current value...
        product[multiplierColumn][operandRow] = product[multiplierColumn][operandRow]
          //Plus the operand 's corresponding value...
          + (operand->get_index(operandRow, productIndex)
             //Times the multiplier 's corresponding value
             * multiplier->get_index(productIndex, multiplierColumn)
             );
      }
    }
  }

  Matrix *matrix1 = new Matrix(product[0], multiplier->get_sizeX(), operand->get_sizeY());

  return matrix1;

}




//  LocalWords:  casted
