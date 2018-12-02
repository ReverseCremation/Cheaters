//#include <sys/types.h>
//#include <dirent.h>
//#include <errno.h>
//#include <vector>
//#include <string>
//#include <iostream>
//#include <fstream>
//#include <stdlib.h>
//#include <stdio.h>

#include "HashMap.h"

using namespace std;

int getdir (string dir, vector<string> &files)
{
    DIR *dp;
    struct dirent *dirp;
    if((dp  = opendir(dir.c_str())) == NULL) {
        cout << "Error(" << errno << ") opening " << dir << endl;
        return errno;
    }

    while ((dirp = readdir(dp)) != NULL) {
        files.push_back(string(dirp->d_name));
    }
    closedir(dp);
    return 0;
}

int main(int argc, char* argv[]){

    if(argc != 3){
        cout << "Must specify 2 arguments: directory path and n (for all permutations of n-word sequences)" << endl;
        exit(EXIT_FAILURE);
    }
cout << "argv[1] = " << argv[1] << endl;

    cout << "argv[2] = " << argv[2] << endl;


    string dir = string(argv[1]);
    vector<string> files = vector<string>();

    getdir(dir, files);

cout << "for(int i = 0; i < files.size(); i++):" <<  endl;
    for(int i = 0; i < files.size(); i++){

cout << "std::ifstream n_wordFile (files[" << i << "]);" << endl;
        std::ifstream n_wordFile (files[i]);
cout << "cout << files[" << i << "] << endl;" << endl;
        //cout << n_wordFile << endl;
        cout << files[i] << endl;
    }
}
