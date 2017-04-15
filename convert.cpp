#include <stdio.h>
#include <iostream>
using namespace std;
int main(){

C = 100

for (i = 1; i<= n ; i++)

for (j = 1; j<= n ; j++) {

        Temp = A[i][j] + C

        A[i][j] = A[j][i]

        A[j][i] = Temp - C

    }

for (i = 1; i<= n ; i++){

        printf(“\n”);

   for (j = 1; j<= n ; j++)

        printf(“%d\t”, &A[i][j]);

}

