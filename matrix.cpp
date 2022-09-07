#include "matrix.h"
#include <time.h>
using namespace std;
int main() {
  srand(time(NULL));
  utec::matrix m1(4, 5);
    for (int i = 0; i < m1.row_size(); ++i) {
        for (int j = 0; j < m1.col_size(); ++j) {
             m1(i, j) = new integer_t(rand() % 100);
        }
    }
    std::cout <<"Matrix 1:"<<endl<<m1;
    utec::matrix m2 = m1;
    
    for (int i = 0; i < m2.row_size(); ++i) {
        for (int j = 0; j < m2.col_size(); ++j) {
            m2(i, j) = new real_t(rand() % 100);
        }
    }
    std::cout <<"Matrix 2:"<<endl<<m2;
}
