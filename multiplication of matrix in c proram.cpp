#include<stdio.h>
int main() {
  int i, j, k;
  int A[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
  int B[3][3] = {{10,11,12}, {13,14,15}, {16,17,18}};
  int C[3][3];
  for(i=0; i<3; ++i)
    for(j=0; j<3; ++j) {
      C[i][j]=0;
    }
  for(i=0; i<3; ++i)
    for(j=0; j<3; ++j)
      for(k=0; k<3; ++k) {
        C[i][j]+=A[i][k]*B[k][j];
      }
  printf("Result matrix is: \n");
  for(i=0; i<3; ++i)
    for(j=0; j<3; ++j) {
      printf("%d ", C[i][j]);
      if(j==2)
        printf("\n");
    }
  return 0;
}

