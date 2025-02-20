#include"openFile.h"

bool FileHandler::checkFile(string a){
    ifstream file(a);    
    return file.good();
}

bool FileHandler::write(string fileName, string data){
    if(!checkFile(fileName)){
        cout << "File does not exist... \n";
        return 0;
    }
    ofstream file(fileName);
    if(file.is_open()){
        file << data;   
        file.close();
    }
    else{
        cout << "Unable to open File...\n";
    }
    return 1;
}

string FileHandler::read(string fileName, string bookName){
    if(!checkFile(fileName)){
        cout << "File does not exist... \n";
        return "";
    }
    string line;
    ifstream file(fileName);
    if(file.is_open()){
        cout << "Testing... \n";
        while(getline(file, line)){
            cout << "Testing... \n";
            if(line.find(bookName) != string::npos){
                cout << line << "\n";
                file.close();
                return line;
            }
            else{
                file.close();
                cout << "Record not available....\n";
            }
        }
        
    }
    return "";
}
  
