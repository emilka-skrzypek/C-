#include <iostream>
#include <fstream>
#include <string>

class Sequence {
private:
    std::string name;
    std::string sequence;

public:
    Sequence() : name(""), sequence("") {}

    void readFasta(const std::string& filePath) {
        std::ifstream file(filePath);

        if (!file) {
            std::cerr << "Error: Could not open file " << filePath << std::endl;
            return;
        }

        std::string line;
        bool firstLine = true;

        while (std::getline(file, line)) {
            if (firstLine) {
                if (line[0] == '>') {
                    name = line.substr(1);
                }
                firstLine = false;
            } else {
                sequence += line;
            }
        }

        file.close();
    }

    void print() const {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Sequence: " << sequence << std::endl;
        std::cout << "Length: " << sequence.size() << " bases" << std::endl;
    }
};

int main() {
    Sequence seq;
    seq.readFasta("example.fasta");
    seq.print();

    return 0;
}
