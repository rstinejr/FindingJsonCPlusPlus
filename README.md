<header>
FindingJsonCPlusPlus: Use Boost for JSON Serialization in C++
-------------------------------------------------------------
</header>

Simple demo of using Boost's header-only ```property_tree``` to
create a string of syntactically correct JSON.

I learned how to do this from the *Stack Overflow* article,
[How to convert class object to json string using boost library in C++?] (http://stackoverflow.com/questions/29363347/how-to-convert-class-object-to-json-string-using-boost-library-in-c)

This code was build on Windows 10 using Visual Studio 15, version 3, and Boost Library 1.63.0. Later I wrote a makefile and was able to build and run the program on Linux.

I cannot find words to praise the Boost Library sufficiently. Without doubt it is some of the
finest software written, and it's free. Instructions for downloading and installing
on windows may be found at

[Boost: Getting Started on Windows](http://www.boost.org/doc/libs/1_63_0/more/getting_started/windows.html#get-boost)

## Building and running on Linux

Program was also tested on 64-bit Linux Mint 17.2 Rafaela, a variant of Ubuntu.

To install boost on Debian linux:

`sudo apt-get install libboost-all-dev`

To build and run on Linux

1. make
2. make run
