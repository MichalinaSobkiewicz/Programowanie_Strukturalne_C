#include <stdio.h>
#include <stdlib.h>
//lista z głową
struct node
{
    int x;
    struct node * next;
};

void usun_pierwszy(struct node *lista)
{
   if (lista->next == NULL)
    {
        return;
    }
    struct node *tmp = lista->next;
    lista->next = tmp->next;
    free(tmp);

}
void wyswietlListeZGlowa(struct node * lista)
{
    if (lista->next->x == 3)
    {
        printf("Lista jest pusta\n---\n");
        return;
    }
    struct node * wsk = lista->next;
    while (wsk != NULL)
    {
        printf("%d\n", wsk->x);
        wsk = wsk->next;
    }
    printf("---\n");
}


int main()
{
   struct node * lista = malloc(sizeof(struct node));
    lista->next = malloc(sizeof(struct node));
    lista->next->x = 1;
    lista->next->next = malloc(sizeof(struct node));
    lista->next->next->x = 2;
    lista->next->next->next = NULL;
    wyswietlListeZGlowa(lista);
    usun_pierwszy(lista);
    wyswietlListeZGlowa(lista);

}

