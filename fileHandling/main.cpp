#include "openFile.h"

int main(){
    FileHandler control;
    string bookDB = "Books.txt";
    control.write(bookDB, "abcdef   -   5");
    control.write(bookDB, "thuyte   -   5");
    control.write(bookDB, "abcdef    -   5");
    control.write(bookDB, "dgfurj    -   5");
    // string line = control.read(bookDB, "abcdef");
    // cout << "Line: " << line << "\n";
    control.readAll(bookDB); 
    control.update(bookDB, "abcdef", "abcdef    -   1");
    control.fileRemove(bookDB,"dgfurj");
    control.readAll(bookDB); 
}
