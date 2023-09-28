#include "file_encode.h"


void fileread::file_read(string filename)
{
    Blockchain bChain =Blockchain();
    
    fstream file(filename, ios::in); // Open the file for reading

    if (!file) {
        cout << "Could not open the file." << endl;
    }

    string line;
    int i=1;
    // Read and display each line in the file
    while (getline(file, line)) {
        
         cout<<"Mining block "<<i<<"...."<<endl;
         bChain.AddBlock(Block(i,line));
         i++;
        //cout << line << endl;
    }

    file.close(); // Close the file when done
   
      
}