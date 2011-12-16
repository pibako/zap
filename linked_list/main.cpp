#include <iostream>

using namespace std;

struct Node {
    double data;
    Node* next;
};

struct List {
    Node* head;
};

List* create_list() {
    List* list = new List;
    list->head = NULL;
}

void append_to_list(List* l, double data) {
    Node* n = new Node;
    n->data = data;
    n->next = NULL;
    if(l->head == NULL) {
        l->head = n;
    } else {
        Node* el = l->head;
        while(el->next != NULL) {
            el = el->next;
        }
        el->next = n;
    }
}

void print_elements(List* l) {
    if(l->head == NULL) {
        return;
    } else {
        Node* el = l->head;
        cout << el->data << endl;
        while(el->next != NULL) {
            el = el->next;
            cout << el->data << endl;
        }
    }
}

int main()
{
    List* l = create_list();
    append_to_list(l, 1.1);
    append_to_list(l, 2.5);
    append_to_list(l, 3.8);
    print_elements(l);
    return 0;
}
