#!/bin/bash

if [ $# -eq 1 ]
then
        path=.
elif [ $# -eq 2 ]
then
        path=$2

if [[  ! -d "$path" ]]
then
    printf "\n$path does not exist on your filesystem.\n\nUsage : ./cpp_class_creator ClassToCreate (path)\n\n"
	exit 0
fi

else
        printf "\nUsage : ./cpp_class_creator ClassToCreate (path)\n\n"
        exit 0
fi

touch $path/$1.cpp
touch $path/$1.hpp

name=$(echo "$1" | tr '[:lower:]' '[:upper:]')

printf "#ifndef ${name}_H\n#define ${name}_H\n\n" > $1.hpp

printf "class $1\n{\nprivate:\n\n\npublic:\n\n" >> $1.hpp

printf "	$1( void );									//default constructor
	$1( std::string name );					//constructor
	$1( $1 const & src);  				//copy
	~$1( void );								//destructor
	$1 & operator=( $1 const & rhs );      //overload operators" >> $1.hpp

printf "\n};\n\n#endif\n" >> $1.hpp



printf "#include \"$1.hpp\"\n\n" > $1.cpp

printf "$1::$1( void )
{
	return ;
}\n\n" >> $1.cpp

printf "$1::$1( std::string name )
{
	return ;
}\n\n" >> $1.cpp

printf "$1::$1( $1 const & src )
{
	*this = src;
	return ;
}\n\n" >> $1.cpp

printf "$1::~$1( void )
{
	return ;
}\n\n" >> $1.cpp

printf "$1 & $1::operator=( $1 const & rhs)
{
    this->??? = rhs.???;
	return ( *this );
}\n" >> $1.cpp

exit 1