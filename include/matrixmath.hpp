#include "matrix.hpp"

 class MatrixMath
{
public:
	static int test(int param);
  static Matrix* multiply(Matrix* operand, Matrix* multiplier);
  static Matrix* transpose(Matrix* input);
  static Matrix* sigmoid(Matrix* input);
  static Matrix* sigmoidPrime(Matrix* input);
  static Matrix* subtract(Matrix* operand, Matrix* multiplier);
  static void printMatrix(Matrix* input);



};

