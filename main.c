#include <stdio.h>
#include "stack.h"
#include "queue.h"
#include "global.h"

typedef EntryType Customer;
void displayCustomers(Queue q);
void displayCustomersMostRecent(Queue q);
int main() {
    Queue Customers;
    CreateQueue(&Customers);
    // Main Menu
    int choice;

    do {

        printf("\t1. Add a New Customer.\n"
               "\t2. Serve a Customer.\n"
               "\t3. Display Customers Information.\n"
               "\t4. Display Customers information in the “most-recent\" Order.\n"
               "\t5. Exit menu\n");
        printf("Please Select a command number: ");


        Customer s;
        scanf("%d", &choice);
        switch (choice) {
            case 1 :
                printf("Enter the Customer's name: ");
                scanf("%s", s.name);
                printf("Enter the Customer's ID: ");
                scanf("%d", &s.id);
                Enqueue(s, &Customers);
                break;
            case 2 :
                printf("\n");
                DeQueue(&s, &Customers);
                printf("Currently Serving Customer No. %d.\n Thanks for using our system, %s \n\n", s.id, s.name);
                break;
            case 3 :
                displayCustomers(Customers);
                break;
            case 4 :
                displayCustomersMostRecent(Customers);
                break;
            case 5 :
                return 0;
        }
    }
    while (choice != 5);

    return 0;
}
void displayCustomers (Queue q){
    Customer s;
    printf("\n");
    printf("ID\t\tName\n");
    while(!QueueEmpty(q)){
        DeQueue(&s, &q);
        printf("%d:\t\t%s\n", s.id, s.name);
    }
    printf("\n");
}
void displayCustomersMostRecent (Queue q){
    Customer customer;
    StackType stack;
    CreateStack(&stack);
    while(!QueueEmpty(q)){
        DeQueue(&customer, &q);
        Push(customer, &stack);
    }
    printf("\n");
    printf("ID\t\tName\n");
    while(!StackEmpty(stack)){
        Pop(&customer, &stack);
        printf("%d:\t\t%s\n",customer.id,customer.name);
    }
    printf("\n");

}