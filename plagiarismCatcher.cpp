#include <sys/types.h>
#include <dirent.h>
#include <errno.h>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>

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

    string dir = string(argv[1]);
    vector<string> files = vector<string>();

    getdir(dir, files);


    for(int i = 0; i < files.size(); i++){

        std::ifstream n_wordFile (files[i]);

        
    }
}
