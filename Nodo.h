#ifndef NODO_H
#define NODO_H

//Estructura nodo
struct Nodo {
    int dato;
    Nodo* izq;
    Nodo* der;
    
    Nodo(int valor);
};

#endif // NODO_H
