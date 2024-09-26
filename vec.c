#include<petsc.h>

int main(int argc ,char **argv)
{
  Vec b;
  
  int j[4]={0,1,2,3};
  double ab[4]={7.0 ,4.0, 2.0 ,3.0};
  
  

  PetscInitialize(&argc,&argv,NULL,"Create vector\n");
  
  VecCreate(PETSC_COMM_WORLD,&b);
  VecSetSizes(b,PETSC_DECIDE,4);
  VecSetFromOptions(b);
  VecSetValues(b,4,j,ab,INSERT_VALUES);

  VecAssemblyBegin(b); VecAssemblyEnd(b);

  VecView(b,PETSC_VIEWER_STDOUT_WORLD);
  VecDestroy(&b);

  return PetscFinalize();


}


