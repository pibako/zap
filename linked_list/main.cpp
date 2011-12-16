#include <iostream>

using namespace std;

struct Node {
    double data;
    Node* next;
};

struct List {
    Node* head;
    int length;
};

List* create_list();
void append_to_list(List* l, double data);
void prepend_to_list(List* l, double data);
void print_elements(List* l);

double get_element(List* l, int position, bool* err);
void insert_element(List* l, int position);
bool is_in_list(List* l, double element);

List* create_list() {
    List* list = new List;
    list->head = NULL;
    list->length = 0;
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
    l->length += 1;
}

void prepend_to_list(List* l, double data) {
    Node* n = new Node;
    n->data = data;
    n->next = NULL;
    if(l->head == NULL) {
        l->head = n;
    } else {
        n->next = l->head;
        l->head = n;
    }
    l->length += 1;
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
    cout << endl;
}

double get_element(List* l, int position, bool* err) {
    if(l->head == NULL) {
        *err = true;
        return 0;
    }
    if(!(l->length > position)) {
        *err = true;
        return 0;
    }
    Node* el = l->head;
    for(int i = 0; i < position; i++) {
        el = el->next;
    }
    *err = false;
    return el->data;
}

int main()
{
    List* l = create_list();

    append_to_list(l, 1.1);
    append_to_list(l, 2.5);
    append_to_list(l, 3.8);
    print_elements(l);
    prepend_to_list(l, 0.5);
    prepend_to_list(l, 0.9);
    print_elements(l);

    bool err;
    double val = get_element(l, 100, &err);
    if(err) {
        // val is not correct
        cout << "This is an error" << endl;
    } else {
        // val is correct
        cout << "Value: " << val << endl;
    }

    cout << "List length: " << l->length << endl;
    return 0;
}
