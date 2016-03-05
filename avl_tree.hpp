#ifndef AVL_TREE_HPP
#define AVL_TREE_HPP

#include "bst.hpp"

template <class T,class Compare = std::less<T> >
class AVL_Tree: public BST<T,Compare>
{
public:
	AVL_Tree(Compare uLess = Compare()):BST<T,Compare>(uLess){}
	AVL_Tree(std::vector<T>& data,Compare uLess = Compare()):BST<T,Compare>(data,uLess){}
};

#endif