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

    public:

    template< typename... Args >
    void emplace (Args&&... args)
    {
    }

}; //
