#pragma once

namespace alby::mylibrary
{
    class myclass
    {
        public:
            myclass() ;
            myclass( const myclass& rhs ) ;
            myclass& operator=( const myclass& rhs ) ;
            virtual ~myclass() ;

            int  get_x() ;
            void set_x( int ) ;

            static std::string version() ;

        protected:
            int x ;
            static int count ;

    } ; // end class

} ; // end namspace

