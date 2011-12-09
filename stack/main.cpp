#include <iostream>

using namespace std;

struct Point {
    double x, y;
};

struct Stack {
    Point *elements;
    int top;
    int size;
};

Stack* create_stack() {
    Stack* s = new Stack;
    s->top = 0;
    s->size = 2;
    s->elements = new Point[s->size];
    return s;
}

void reallocate_stack(Stack *s) {
    int new_size = 2 * s->size;
    Point* new_elements = new Point[new_size];
    for(int i = 0; i < s->size; i++) {
        new_elements[i] = s->elements[i];
    }
    delete s->elements;
    s->elements = new_elements;
    s->size = new_size;
}

void pushS(Stack* s, Point p) {
    if (s->top == s->size) {
        reallocate_stack(s);
    }
    s->elements[s->top] = p;
    s->top++;
}

int main()
{
    Stack* stack = create_stack();

    Point p = {0,0};

    cout << "Push" << endl;
    for(int i=0; i < 5; i++) {
        pushS(stack, p);
        cout << "x=" << p.x << " y=" << p.y << endl;
    }

    return 0;
}
