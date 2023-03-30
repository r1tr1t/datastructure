#pragma once

#include <utility>
#include <cstddef>
#include <stdexcept>

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

    size_t size {};

    public:

    DList ()
    {
    }

    private:

    template< typename... Args >
    void emplace ( Node< T >* prevNode, Args&&... args )
    {
        auto* node = new Node< T > { std::forward< Args > ( args )... };
        size++;

        if ( prevNode )
            return addBetween ( *prevNode, *node );
        else if (size > 1)
            throw std::runtime_error ( "DList::emplace() called with empty list" );

        first = node;
    }
    void addBetween ( auto& prevNode, auto& node )
    {
        if(prevNode.next ) {
            prevNode.next->last = &node;

            node.next = prevNode.next;
        }

        node.last = &prevNode;

        prevNode.next = &node;
    }

}; //
