using namespace std;
namespace utec{
  class matrix{
    private:
    vector<vector<number_t*>>matrix_1;
    int fila,columna;
    public:
    matrix(int fil, int col);
    int row_size();
    int col_size();
    number_t* &operator()(int i, int j);
    matrix& operator=(matrix& m);
    friend ostream& operator<<(ostream& salida,matrix& m){
      for(int i=0;i< m.row_size();i++){
        for(int j=0;j<m.col_size();j++){
        if(m(i,j)->get_type()=='i')
          salida << m(i,j)->num()<<" ";
        else salida << m(i,j)->num()<<" "; }
        salida<<endl;
        }return salida;}};}
