#pragma once
#include <iostream>

template <typename T>
class Nodo {
public:

    T data;
    Nodo* next;

    Nodo(T data) {
        this->data = data;
        next = NULL;
    }
};

template <typename T>
class pila {

private:
    Nodo<T>* head;

public:
    pila() {
        this->head = NULL;
    }

    ~pila() {

        Nodo<T>* aux = head;
        while (aux->next != NULL) {
            head = aux->next;
            delete aux;
            aux = head;
        }
        delete aux;
    }

    void push(T new_head_data) {

        if (head == NULL) {
            head = new Nodo<T>(new_head_data);
            return;
        }

        Nodo<T>* new_head = new Nodo<T>(new_head_data);

        new_head->next = this->head;
        this->head = new_head;
    }

    void pop() {

        if (head == NULL) return;

        Nodo<T>* aux = head;
        head = head->next;
        delete aux;

    }

    T top() {

        return head->data;

    }

    bool isempty() {

        if (head == NULL) {
            return true;
        }
        else {
            return false;
        }
    }

};
