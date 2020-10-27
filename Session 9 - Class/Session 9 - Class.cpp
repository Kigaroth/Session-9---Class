// Session 9 - Class.cpp //

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

void readFromFile();

int main()
{
    readFromFile();
    std::cout << "Hello World!\n";
}

void readFromFile() {

    std::fstream File("story1.txt", std::ios::in);

    //if file exist and it's open
    if (File) {
        perror("File exist");
    }

    else {
        // if file doesn't exist or there was a problem with opening it.
        perror("Read from file ");
    }

    std::

}
