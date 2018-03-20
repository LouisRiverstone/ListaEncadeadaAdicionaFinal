//Estrutura cel->info
typedef struct cel Celula;
//Cria Celula
Celula* cria_celula();
//Busca um valor na lista
Celula* busca_celula(Celula* cel,int v)
//Insere um valor ao final da lista
Celula* insere_celula(Celula* cel,int v);
//Imprime essa porra
void imprime_celula(Celula* cel);
//Remove da lista
Celula* remove_celula(Celula* cel, int v);
//Testa se esse caralho está vazio
int testa_vazia(Celula* cel);
//Libera o rego
void libera_celula(Celula* cel);
//Insere esse lixo ordenado
Celula* cel_insere_ordenado(Celula* cel, int v);

//Teu pai corno!
//Direitos direitivos do Trap
//Qualquer copia desse lixo está autorizado
//Seja (in)feliz com essa merda
