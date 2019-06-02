#include <stdio.h>
#include <stdlib.h>


typedef struct no No;

struct no{
	int info;
	struct no * proximo;
};


No * cria_no(int);

int libera_no(No**);




