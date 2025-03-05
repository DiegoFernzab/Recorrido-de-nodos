#include "Nodo.h"
#include "Recorridos.h"
#include <iostream>

int main() {
    //Aquí se agregan los nodos a la funcion
    Nodo* raiz = new Nodo(7);
    raiz->izq = new Nodo(3);
    raiz->der = new Nodo(20);
    raiz->izq->izq = new Nodo(0);
    raiz->izq->izq->izq = new Nodo(-3);
    raiz->izq->izq->der = new Nodo(1);
    raiz->izq->der = new Nodo(5);
    raiz->izq->der->izq = new Nodo(4);
    raiz->izq->der->izq = new Nodo(6);
    raiz->der->izq = new Nodo(15);
    raiz->der->der = new Nodo(25);
    raiz->der->der->der = new Nodo(30);
    
    std::cout << "Inorder (LDR): ";
    inorder(raiz);
    std::cout << std::endl;
    
    std::cout << "Preorder (DLR): ";
    preorder(raiz);
    std::cout << std::endl;
    
    std::cout << "Postorder (LRD): ";
    postorder(raiz);
    std::cout << std::endl;
    
    return 0;
}
