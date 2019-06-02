#include "lista.h"

void teste_no(){
    No no1, no2;
    No* n;
    n = cria_no(98);
    no1.info = 10;
    no1.proximo = NULL;
    printf("\nn1.info = %d",no1.info);
    printf("\nn1.proximo = %d", no1.proximo);
    no2.info = 20;
    no2.proximo = &no1;
    printf("\nn2.info = %d", no2.info);
    printf("\nn2.proximo = %d", no2.proximo);
    printf("\nn->info = %d\n", n->info);
    if (libera_no(&n)){
        printf("Memoria limpa\n");
        printf("%p\n", n);
    }
    //n = &no1; errado
    /*libera_no(&n); errado nao possivel liberar
    variaveis estáticas*/
    n = &no2;
    n->info = 50;
    printf("no2.info = %d", no2.info);
    n->proximo->info = 100;
    printf("\nno1.info = %d", no1.info);
}

void teste_lista(){
    struct lista l;
    int n;
    inicia_lista(&l);
    mostra_lista(&l, "lista foi inicializada");
    insere_inicio(10, &l);
    /*insere_inicio(20, &l);
    insere_inicio(30, &l);
    insere_inicio(40, &l);*/
    mostra_lista(&l, "lista depois das insercoes de inicio");
    insere_fim(5, &l);
    insere_fim(15, &l);
    insere_fim(25, &l);
    insere_fim(35, &l);
    mostra_lista(&l, "Lista depois das insercoes de fim");
    if(remove_inicio(&n,&l)){
        printf("\n%d foi removido do inicio\n",n);
        mostra_lista(&l, "lista depois das insercoes de fim");
    }



}
int main(){
    //teste_no();
    teste_lista();

    return 0;
}

