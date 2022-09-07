#include "matrix.h"
using namespace utec;
matrix_t::matrix_t(int fil, int col):fila(fil),columna(col){
  matrix_1.resize(fila);
  for(int i=0;i<fila;i++){
        matrix_1[i].resize(columna);

        for(int j=0;j<columna;j++){
            matrix_1[i][j]=nullptr;
        }
    }
}
int matrix_t::row_size(){
  return fila;
}
int matrix_t::col_size(){
  return columna;
}
number_t* &matrix_t::operator() (int i, int j) {
    return matrix_1[i][j];
}
