#ifndef OPENFILE_H
#define OPENFILE_H

#include<iostream>
#include<fstream>
#include<string>

using namespace std;
class FileHandler{
    private:
        bool checkFile(string a);
    public:
        bool write(string, string);
        std::string read(string, string);

};


#endif  /*  OPENFILE_H */



