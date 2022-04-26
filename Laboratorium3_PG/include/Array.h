#ifndef ARRAY_H
#define ARRAY_H
#include <algorithm>
#include <iostream>
using namespace std;
template <typename T>
class Array
{
    private:
        T* tab;
        int maks_size;
        int first_free;
    public:
        Array(int rozmiar);
        Array();
        virtual ~Array();
        void sortuj_rosnaco();
        void show();
        void add(T element);
        T maks();
        T show_at(int i);
};

#endif // ARRAY_H
