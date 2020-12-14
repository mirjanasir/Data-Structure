int main()
{
   struct node {
    int data;
    struct node *next;
};

void pushList(struct node **head, int item)
{
    struct node *temp = (struct node *) malloc(sizeof (struct node));
    temp->data = item;
    temp->next = *head;
    *head = temp;

    printf("*temp = %ld\n"
           "temp->data = %d\n"
           "temp = %ld\n"
           "&temp = %ld\n", *temp, (temp)->data, temp, &temp);
    printf
        ("*head = %ld\n"
         "**head = %ld\n"
         "(*head)->next = %ld\n"
         "head = %ld\n"
         "&head = %ld\n", *head, **head, (*head)->next, head, &head);
}

int main()
{
    struct node *head = NULL;
    printf("&head = %ld\n", &head);
    pushList(&head, 1);
    printf("\n");
    pushList(&head, 2);
    return 0;
}
}
