#include "file_save.h"

void filesave::file_write(Block bNew)
{
    fstream File;
    File.open("F:/Project/blockchain1/blockchain_log.txt",ios::app);
    
    File<<bNew.GetHash()<<endl;
    File.close();
   
      
}

/* void filesave::file_read(string filename)
{
    Block bNew
    fstream file(filename, ios::in); // Open the file for reading

    if (!file) {
        cout << "Could not open the file." << endl;
        return 1;
    }

    string line;

    // Read and display each line in the file
    while (getline(file, line)) {
        cout << line << endl;
    }

    file.close();
} */