#include "matrix.h"
using namespace utec;
matrix::matrix(int fil, int col):fila(fil),columna(col){
  matrix_1.resize(fila);
  for(int i=0;i<fila;i++){
        matrix_1[i].resize(columna);

        for(int j=0;j<columna;j++){
            matrix_1[i][j]=nullptr;
        }
    }
}
int matrix::row_size(){
  return fila;
}
int matrix::col_size(){
  return columna;
}
number_t* &matrix::operator() (int i, int j) {
    return matrix_1[i][j];
}
