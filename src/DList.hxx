#pragma once

template<typename T>
struct Node {
    Node* last {};
    Node* next {};

    T data {};
};

template< typename T>
class DList
{
    public:

    Node<T>* first {};
    Node<T>* last {};

    public:

    DList () {
    }

}; //
