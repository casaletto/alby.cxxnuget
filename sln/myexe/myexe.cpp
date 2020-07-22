#include <windows.h>
#include <string>
#include <iostream>

#include "../alby.mylibrary/include/alby.myclass.h" 

int main()
{
    std::cout << "myexe start\n" ;

    alby::mylibrary::myclass a ;
    a.set_x( 100 ) ;

    auto b(a) ;

    std::cout << b.get_x() << "\n" ;

    std::cout << alby::mylibrary::myclass::version() << "\n" ;

    std::cout << "myexe end\n";

    return 0 ;
}


