#include "number.h"
number_t::number_t(double n){
  numero=n;
}
number_t::number_t(int n){
  numero=n;
}
char number_t::get_type(){
  return type;
}
integer_t::integer_t(int n):number_t(n){
  type='i';
  int b=rand()%2;
  if (b==1){
    res=n*-1;
  }
  else {
    res=n;
  }
  numero=res;
}
real_t::real_t(double n):number_t(n){
  type='r';
  int b=rand()%2;
  int c=rand()%2;
  if (b==0){
    if(c==1){
      res=-1*n;
    }
    else{res=n;}
  }
  if(b==1){
    if(c==1){
      res=-1*(n*(rand()%100))/100;
    }
    else{
    res=(n*(rand()%100))/100;}
  }
  numero=res;
}
double number_t::num(){
    return numero;
}