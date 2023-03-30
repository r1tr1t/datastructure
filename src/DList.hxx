#pragma once

#include <utility>

template< typename T >
struct Node
{
    Node* last {};
    Node* next {};

    T data;

    template< typename... Args >
    Node ( Args&&... args )
        : data ( std::forward< Args > ( args )... )
    {
    }
};

template< typename T >
struct DList
{
    public:

    Node< T >* first {};
    Node< T >* last {};

    public:

    DList ()
    {
    }

    private:

    template< typename... Args >
    void emplace (Node<T>* prevNode, Args&&... args)
    {
        auto* node = new Node<T> { std::forward< Args > ( args )... };

        if (prevNode)
        first = node; // more complex, separate function
        else
        first = node;
    }

}; //
