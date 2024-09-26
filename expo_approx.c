#include<stdio.h>
#include<math.h>

long int fact(int a){

  if((a==0)||(a==1))
    {

      return 1;
    }
  else {

    return a*fact(a-1);

  }
  

}


int main() {

  int i,N=5;
  double e=0.0;
  for(i=0;i<N;i++){

    e=e+1.0/fact(i);
    

  }
  printf("Aprox: %f\n",e);
  
  return 0;
}
