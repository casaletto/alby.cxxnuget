#include <windows.h>
#include <string>
#include <iostream>
#include "version.h"
#include "./include/alby.myclass.h"

namespace alby::mylibrary
{
    int myclass::count = 0 ;

    myclass::myclass() : x( 0 )
    {
        count++ ;

        std::string str = "myclass(), count = ";
        str += std::to_string( count ) ;
        std::cout << str << "\n" ;
    }

    myclass::myclass( const myclass& rhs ) 
    {
        count++ ;
        this->x = rhs.x ;

        std::string str = "myclass( myclass ), count = " ;
        str += std::to_string( count ) ;
        std::cout << str << "\n" ;
    }

    myclass& myclass::operator=( const myclass& rhs ) 
    {
        this->x = rhs.x ;

        return *this ;
    }

    myclass::~myclass()
    {
        count-- ;

        std::string str = "myclass~(), count = " ;
        str += std::to_string( count ) ;
        std::cout << str << "\n" ;
    }

    int myclass::get_x()
    {
        return this->x ;
    }

    void myclass::set_x( int x )
    {
        this->x = x ;
    }

    std::string myclass::version()
    {
        return ALBY_MYLIBRARY_VERSION ;
    }

} ;

