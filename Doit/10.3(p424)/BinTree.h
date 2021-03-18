//
//  BinTree.h
//  10.1(p1)
//
//  Created by hyungwook on 2021/03/17.
//

#ifndef ___BinTree
#define ___BinTree

#include "Member.h"

typedef struct __bnode {
    Member data;
    struct __bnode *left;
    struct __bnode *right;
} BinNode;

BinNode *Search(BinNode *p, const Member *x);

BinNode *Add(BinNode *p, const Member *x);

int Remove(BinNode **root, const Member *x);

void PrintTree(const BinNode *p);

void FreeTree(BinNode *p);
#endif
