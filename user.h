#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED

#include <iostream>
#include <string>
#include "post.h"
using namespace std;

#define first(L) ((L).first)
#define info(P) (P)->info
#define next(P) (P)->next

struct User
{
    int id;
    string namaUser;
};

typedef struct User infotype;
typedef struct elmUser *adrUser;

struct elmUser{
    infotype info;
    adrUser next;
};

struct List {
    adrUser first;
};

void createListUser (List &L);
adrUser createElementUser (infotype x);
void insertLast (List &L, adrUser P);
void deleteLast (List &L);

#endif // USER_H_INCLUDED
