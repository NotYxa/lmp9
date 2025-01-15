#include "gauss.h"
#include "backsubst.h"
#include "mat_io.h"
#include <stdlib.h>
#include <stdio.h>


int main(int argc, char ** argv) {
	int res;
	Matrix * A = readFromFile(argv[1]);
	Matrix * b = readFromFile(argv[2]);
	Matrix * x;

	if (A == NULL) return -1;
	if (b == NULL) return -2;
	printToScreen(A);
	printToScreen(b);

	res = eliminate(A,b);
	x = createMatrix(b->r, 1);
	if (x != NULL) {
		res = backsubst(x,A,b);

		printToScreen(x);
	  freeMatrix(x);
	} else {
					fprintf(stderr,"Błąd! Nie mogłem utworzyć wektora wynikowego x.\n");
	}

	freeMatrix(A);
	freeMatrix(b);

	return 0;
}

Matrix* copyMatrix(Matrix *mat) {
    if (mat == NULL)
        return NULL;
        
    Matrix *copy = createMatrix(mat->r, mat->c);
    if (copy == NULL)
        return NULL;
        
    for (int i = 0; i < mat->r; i++) {
        for (int j = 0; j < mat->c; j++) {
            copy->data[i][j] = mat->data[i][j];
        }
    }
    
    return copy;
}