# Lista Encadeada que Adiciona no Final
Uma lista encadeada que insere elementos no final da lista, feito em C
Livre caso queira adaptar ao seu uso.
<br>
//Estrutura cel->info<br>
typedef struct cel Celula;<br>
<br>
//Cria Celula<br>
Celula* cria_celula();<br>
<br>
//Busca um valor na lista<br>
Celula* busca_celula(Celula* cel,int v);<br>
<br>
//Insere um valor ao final da lista<br>
Celula* insere_celula(Celula* cel,int v);
<br>
//Imprime a lista<br>
void imprime_celula(Celula* cel);<br>
<br>
//Remove da lista<br>
Celula* remove_celula(Celula* cel, int v);
<br>
//Testa se está vazio<br>
int testa_vazia(Celula* cel);<br>
<br>
//Libera a celula<br>
void libera_celula(Celula* cel);<br>
<br>
//Insere ordenando-os<br>
Celula* cel_insere_ordenado(Celula* cel, int v);<br>
