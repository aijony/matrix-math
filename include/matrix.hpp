class Matrix
{
public:

  Matrix(double* inputArray, int x, int y);

  double* get_matrices() {
    return matrices;
  }

  double get_index(int row, int column);

  int get_sizeY() {
    return sizeY;
  }

  void set_sizeY(int sizeY) {
    this->sizeY = sizeY;
  }

  int get_sizeX() {
    return sizeX;
  }

  void set_sizeX(int sizeX) {
    this->sizeX = sizeX;
  }



private:

  int sizeX;

  int sizeY;

  double* matrices;
};
