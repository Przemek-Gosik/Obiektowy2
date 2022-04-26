#ifndef ADDING_H
#define ADDING_H
#include <algorithm>
#include <iostream>
#include <string>
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
template <typename T>
Array<T>::Array(int rozmiar){
    this->maks_size=rozmiar;
    tab=new T [rozmiar];
    this->first_free=0;
}
template <typename T>
Array<T>::Array():Array<T>::Array(10){
}
template <typename T>
Array<T>::~Array(){

delete []this->tab;
}
template <typename T>
void Array<T>::sortuj_rosnaco(){
    sort(tab,tab+this->first_free);
}
template <>
inline
void Array<string>::sortuj_rosnaco(){

    sort(tab,tab+this->first_free,[](string e,string l){return e.length()<l.length();});
}
template <typename T>
T Array<T>::maks(){
    T maxi=* max_element(tab,tab+first_free);
    return maxi;
}
template <>
inline
string Array<string>::maks(){
    string maxi=* max_element(tab,tab+first_free,[](string a,string b){ return a.length() < b.length();} );
    return maxi;
}
template <typename T>
void Array<T>::show(){
    for(int i=0;i<this->first_free;i++){
        cout<<tab[i]<<" ";
    }
    cout<<endl;
}
template <typename T>
void Array<T>::add(T element){
    if(this->first_free != this->maks_size ){
        tab[this->first_free]=element;
        this->first_free++;
    }
    else{
        cout<<"Dupa"<<endl;
    }
}
template <typename T>
T Array<T>::show_at(int i){
    if(i<this->first_free){
        return tab[i];
    }
    else{
        cout<<"Nie ma takiego indeksu!"<<endl;
        return tab[0];
    }


}

#endif // ADDING_H
