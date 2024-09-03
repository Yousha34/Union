#include <iostream>
#include <cstring>
using namespace std ;

int main (){

    union pokemon{

        char name[50] ;
        int power ;
        float size ;
        char level ;

    } ;

    pokemon pikachu ;
    
    strcpy( pikachu.name, "Pikachu" ) ;
    pikachu.level = 's' ;
    pikachu.size = 120.5 ;
    pikachu.power = 100 ;

    cout << "Name of pikachu : " << pikachu.name << endl ;
    cout << "Level of pikachu : " << pikachu.level << endl ;
    cout << "Size of pikachu : " << pikachu.size << endl ;
    cout << "Power of pikachu : " << pikachu.power << endl ;

    return 0 ;
}