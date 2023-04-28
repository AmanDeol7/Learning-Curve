#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
    int data;
    struct node * next;
};

//Test comment

struct node *addbeg(struct node *head)
{
    int data;
    scanf("%d", &data);

    struct node *temp = malloc(sizeof(struct node));

    temp->data = data;
    temp->next = head;
    head = temp;

    return head;
}

void display(struct node *head)
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

void insert(struct node *head)
{
    int n;

    scanf("%d", &n);

    int data;
    scanf("%d", &data);

    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;

    struct node *ptr = head;
    while (ptr->data != n)
    {

        ptr = ptr->next;
    }

    temp->next = ptr->next;
    ptr->next = temp;
}
void addend(struct node *head)
{
    int data;
    scanf("%d", &data);
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;
    struct node *ptr;
    ptr = head;

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
}

struct node * delbeg(struct node * head)
{
    struct node * temp ;
    temp =head->next;
    free(head);
    head =temp;
    return head;

    
}
void delmid(struct node * head)
{
    int n;
    scanf("%d", &n);

    struct node * temp, *ptr;

    temp =head;
    ptr = head;
    while ( ptr->data != n)
    {
      
        ptr = ptr->next;


    }
    ptr =ptr->next;

    while( temp->next != ptr)
    {
        temp= temp->next;

    }
    temp->next = ptr->next;
    free(ptr);


}

void delend(struct node * head)
{
    struct node * temp ,* ptr;
    temp = head;
    ptr = head;
    while (ptr->next!= NULL)
    {
        ptr = ptr->next;

    }
    while ( temp->next != ptr)
    {
        temp = temp->next;
    }
    temp->next = NULL;
    free(ptr);

}


int main()
{
    char s[2];
    struct node *head = NULL;

    while (1)
    {

        scanf("%s", s);

        int t = strcmp("1A", s);
        int y = 0;
        int r = strcmp("1B", s);
        int p = strcmp("1C", s);
        int d = strcmp("3", s);
        int e = strcmp("4", s);
        int delb = strcmp("2A", s);
        int delm = strcmp("2B", s);
        int dele = strcmp("2C", s);




        if (t == 0)
        {

            y = 1;
        }
        else if (r == 0)
        {
            y = 2;
        }
        else if (p == 0)
        {
            y = 3;
        }
        else if (d == 0)
        {
            y = 4;
        }
        else if (e == 0)
        {
            y = 5;
        }
         else if (delb == 0)
        {
            y = 6;
        }
         else if (delm == 0)
        {
            y = 7;
        }
         else if (dele == 0)
        {
            y = 8;
        }


        else
        {
            printf("enter valid input");
        }

        switch (y)
        {
        case 1:

            head = addbeg(head);

            break;
        case 2:
            insert(head);

            y = 0;
            break;
        case 3:

            addend(head);
            y = 0;
            break;
        case 4:

            display(head);
            y = 0;
            break;
        case 5:

            exit(0);
        case 6:
            head = delbeg(head);
            break;
        case 7:
            delmid(head);
            break;
            
        case 8:
            delend(head);
            break;
        default:

            exit(0);
        }
    }
    return 0;
}
