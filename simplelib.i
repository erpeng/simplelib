%module(directors="1") simplelib

%feature("director") SimpleClassCallback;

%{
#include "simpleclass.h"
%}

%include <typemaps.i>
%include "std_string.i"
%include "std_vector.i"

// This will create 2 wrapped types in Go called
// "StringVector" and "ByteVector" for their respective
// types.
namespace std {
   %template(StringVector) vector<string>;
   %template(ByteVector) vector<char>;
}

%include "simpleclass.h"
