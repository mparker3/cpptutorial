#include <fstream>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>
#include <cstdlib>


int main(int argc, char** argv){
    
    if (argc < 2){
        std::cerr<<"Usage: wordcount <infile>\n";
        return EXIT_FAILURE;
    }
    
    std::ifstream infile(argv[1]);
    
    return 0;
}