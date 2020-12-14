
void display(){
    struct node *np;
    np= first;
    while (np != NULL){
        printf("%d", np->pages);
        np= np->next;
    }
}
