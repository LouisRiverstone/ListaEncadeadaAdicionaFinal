# Lista Encadeada que Adiciona no Final
Uma lista encadeada que insere elementos no final da lista, feito em C
Livre caso queira adaptar ao seu uso.

//Estrutura cel->info
typedef struct cel Celula;

//Cria Celula
Celula* cria_celula();

//Busca um valor na lista
Celula* busca_celula(Celula* cel,int v)

//Insere um valor ao final da lista
Celula* insere_celula(Celula* cel,int v);

//Imprime a lista
void imprime_celula(Celula* cel);

//Remove da lista
Celula* remove_celula(Celula* cel, int v);

//Testa se está vazio
int testa_vazia(Celula* cel);

//Libera a celula
void libera_celula(Celula* cel);

//Insere ordenando-os
Celula* cel_insere_ordenado(Celula* cel, int v);
