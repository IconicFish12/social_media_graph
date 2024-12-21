#ifndef POST_H_INCLUDED
#define POST_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

#define first(L) ((L).first)
#define info(P) (P)->info
#define next(P) (P)->next

struct Post
{
    int id;
    int userId;
    string namaPost;
    string isiPost;
    int jumlahLike;
    bool isPublish;
};

typedef struct Post infotype;
typedef struct elmPost *adrPost;

struct elmPost{
    infotype info;
    adrPost next;
};

struct List {
    adrPost first;
};

void createListPost (List &L);
adrPost createElementPost (infotype x);
void insertLast (List &L, adrPost P);
void deleteLast (List &L);

#endif // POST_H_INCLUDED
