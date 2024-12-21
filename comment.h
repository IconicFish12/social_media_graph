#ifndef COMMENT_H_INCLUDED
#define COMMENT_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

#define first(L) ((L).first)
#define info(P) (P)->info
#define next(P) (P)->next

struct comment
{
    int id;
    int postId;
    string message;
};

typedef struct comment infotype;
typedef struct elmComment *adrComment;

struct elmComment{
    infotype info;
    adrComment next;
};

struct List {
    adrComment first;
};

void createListComment (List &L);
adrComment createElementComment (infotype x);
void insertLast (List &L, adrComment P);
void deleteLast (List &L);


#endif // COMMENT_H_INCLUDED
