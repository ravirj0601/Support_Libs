#include "openFile.h"

int main(){
    FileHandler control;
    string bookDB = "Books.txt";
    control.write(bookDB, "abcdef    -   5");
    string line = control.read(bookDB, "abcdef");
    cout << "Line: " << line << "\n";
}
