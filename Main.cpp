#include <iostream>
#include "Stack.cpp"

using namespace std;

int main()
{
    Stack<int> *pila1 = new Stack<int>();

    int valores[] = {30, 76, 88, 34, 12, 24};

    pila1->push(&valores[0]);
    pila1->push(&valores[1]);
    pila1->push(&valores[2]);
    pila1->push(&valores[3]);
    pila1->push(&valores[4]);
    pila1->push(&valores[5]);

    while (!pila1->isEmpty())
    {
        cout << "El numero pop es:  " << endl;
        cout << *pila1->pop() << endl;
        cout << "EL Top es: " << endl;
        if (*pila1->top() != NULL)
            cout << *pila1->top() << endl;
    }
}