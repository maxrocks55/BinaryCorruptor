#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::string filename;
    std::cout << "what is the filename?\n> ";
    std::getline(std::cin, filename);
    std::ofstream outfile(filename, std::ios::trunc | std::ios::binary);
    if (!outfile) {
        std::cerr << "Error opening file!\n";
        return 1;
    }
    outfile << "\0";
    outfile.close();
    return 0;
}
