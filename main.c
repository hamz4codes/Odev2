///Soru1: Node yapısı oluşturma ve 10 değerini saklayıp değerini yazma.

/*
#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node n1;
    n1.data = 10;
    n1.next = NULL;

    printf("Node data: %d\n", n1.data);
    return 0;
}
*/


///Soru2: İki Node'u birbirine bağlama ve değerlerini yazma.

/*
#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node n1, n2;
    
    n1.data = 10;
    n2.data = 20;

    n1.next = &n2;
    n2.next = NULL;

    printf("n1 data: %d\n", n1.data);
    printf("n2 data: %d\n", n1.next->data);

    return 0;
}
*/


///Soru3: 3 Node'lu listeyi yazdırma.

/*

#include <stdio.h>

struct Node {
    int data;
    struct Node *next;
};

int main(){
    struct Node n1, n2, n3;
    
    n1.data = 10;
    n1.next = &n2;

    n2.data = 20;
    n2.next = &n3;

    n3.data = 30;
    n3.next = NULL;

    struct Node *head = &n1;
    struct Node *current = head;

    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    return 0;
}
*/


///Soru4: Malloc kullanarak Linked List oluşturma.

/*
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *n1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *n2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node *n3 = (struct Node*)malloc(sizeof(struct Node));

    n1->data = 10;
    n1->next = n2;

    n2->data = 20;
    n2->next = n3;

    n3->data = 30;
    n3->next = NULL;

    struct Node *head = n1;
    struct Node *current = head;

    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");

    free(n1);
    free(n2);
    free(n3);

    return 0;
}
*/

///Soru5: Listenin eleman sayısını bulma.

/*
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 20;
    head->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->data = 30;
    head->next->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->next->data = 40;
    head->next->next->next->next = NULL;

    int count = 0;
    struct Node *current = head;

    while (current != NULL) {
        count++;
        current = current->next;
    }

    printf("Number of elements in the linked list: %d\n", count);

    return 0;
}
*/


///Soru6: Listenin elemanlarını toplama.

/*
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 20;
    head->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->data = 30;
    head->next->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->next->data = 40;
    head->next->next->next->next = NULL;

    int sum = 0;
    struct Node *current = head;

    while (current != NULL) {
        sum += current->data;
        current = current->next;
    }

    printf("Sum of elements in the linked list: %d\n", sum);

    return 0;
}
*/


///Soru7: Linked List'te eleman arama.

/*
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 20;
    head->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->data = 30;
    head->next->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->next->data = 40;
    head->next->next->next->next = NULL;

    int target, found = 0;
    printf("Enter the element to search: ");
    scanf("%d", &target);

    struct Node *current = head;

    while (current != NULL) {
        if (current->data == target) {
            found = 1;
            break;
        }
        current = current->next;
    }

    if (found) {
        printf("Element %d found in the linked list.\n", target);
    } else {
        printf("Element %d not found in the linked list.\n", target);
    }

    return 0;
}
*/


///Soru8: Listenin başına eleman ekleme.

/*
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 20;
    head->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->data = 30;
    head->next->next->next = NULL;

    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 5;
    newNode->next = head;
    head = newNode;

    struct Node *current = head;
    
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");

    return 0;
}
*/


///Soru9: Listenin sonuna eleman ekleme.

/*
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 20;
    head->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->data = 30;
    head->next->next->next = NULL;

    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = 40;
    newNode->next = NULL;

    struct Node *current = head;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;

    current = head;
    
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }

    printf("NULL\n");

    return 0;
}
*/


///Soru10: Belirli bir değeri listeden silme.

/*
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

int main() {
    struct Node *head = (struct Node*)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->data = 20;
    head->next->next = (struct Node*)malloc(sizeof(struct Node));
    head->next->next->data = 30;
    head->next->next->next = NULL;

    int target;
    printf("Enter the element to delete: ");
    scanf("%d", &target);

    struct Node *temp = head;
    struct Node *prev = NULL;

    if (temp != NULL && temp->data == target) {
        head = temp->next;
        free(temp);
    } else {
        while (temp != NULL && temp->data != target) {
            prev = temp;
            temp = temp->next;
        }
        if (temp == NULL) {
            printf("Element %d not found in the linked list.\n", target);
        } else {
            prev->next = temp->next;
            free(temp);
            printf("Element %d deleted from the linked list.\n", target);
        }
    }

    struct Node *current = head;
    printf("Updated Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");

    return 0;
}
*/


///Fonksiyonlaştırılmış Linked List.

/*
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node* insertBeginning(struct Node *head, int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = head;
    return newNode;
}

void display(struct Node *head) {
    struct Node *current = head;
    if (current == NULL) {
        printf("Linked List is empty.\n");
        return;
    }
    printf("Linked List: ");
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int search(struct Node *head, int key) {
    struct Node *current = head;
    while (current != NULL) {
        if (current->data == key) {
            return 1;
        }
        current = current->next;
    }
    return 0;
}

int main() {
    struct Node *head = NULL;

    head = insertBeginning(head, 30);
    head = insertBeginning(head, 20);
    head = insertBeginning(head, 10);

    display(head);

    int key = 20;
    if (search(head, key)) {
        printf("Element %d found in the linked list.\n", key);
    } else {
        printf("Element %d not found in the linked list.\n", key);
    }

    key = 50;
    if (search(head, key)) {
        printf("Element %d found in the linked list.\n", key);
    } else {
        printf("Element %d not found in the linked list.\n", key);
    }

    return 0;
}
*/