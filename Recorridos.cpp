#include "Recorridos.h"

/*Función que imprime el recorrido de un arbol binario: inorder (LDR) */
void inorder(Nodo* nodo) {
    if (nodo == nullptr) return;
    inorder(nodo->izq);
    std::cout << nodo->dato << " ";
    inorder(nodo->der);
}
/*Función que imprime el recorrido de un arbol binario: preorder (DLR) */
void preorder(Nodo* nodo) {
    if (nodo == nullptr) return;
    std::cout << nodo->dato << " ";
    preorder(nodo->izq);
    preorder(nodo->der);
}
/*Función que imprime el recorrido de un arbol binario: inorder (LRD) */
void postorder(Nodo* nodo) {
    if (nodo == nullptr) return;
    postorder(nodo->izq);
    postorder(nodo->der);
    std::cout << nodo->dato << " ";
}
