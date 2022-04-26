#include <iostream>
#include <string>
#include "Adding.h"
using namespace std;

int main()
{
    Array <int> tablica(11);
    tablica.add(5);
    tablica.add(6);
    tablica.add(12);
    tablica.add(1);
    tablica.add(0);
    tablica.add(13);
    tablica.add(20);
    tablica.add(24);
    tablica.add(17);
    tablica.add(3);
    cout<<tablica.maks()<<endl;
    tablica.sortuj_rosnaco();
    tablica.show();

    Array<string> tab2(10);
    tab2.add("hellossssss");
    tab2.add("world");
    tab2.add("i");
    tab2.add("am");
    tab2.add("weasel");

    tab2.show();
    cout << "Element na indeksie 0: " << tab2.show_at(0) << endl;
    cout << "Element maksymalny: " << tab2.maks() << endl;
    tab2.sortuj_rosnaco();
    tab2.show();
    return 0;
}
