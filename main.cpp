#include <iostream>
#include <fstream>
#include <string>

void readFile(std::string fileName) {
    std::ifstream inf{ "test.txt" };
    if (!inf) {
        std::cerr << "Error\n";
    }
    std::string strInput{};
    while (inf >> strInput) {
        std::cout << strInput << '\n';
    }
}

int main(int argc, char* argv[]) {
    // TODO: read a file line by line
    // TODO: extract URLs via regex
    // TODO: read all files in a folder
    // TODO: dedupe URLs into a container (set/vector)
    // TODO: HTTP HEAD/GET each URL (libcurl)
    // TODO: classify result (ok / 4xx / 5xx / timeout / unreachable)
    // TODO: parallelize requests (thread pool)
    // TODO: report dead links (CSV/JSON + summary)
    // TODO: politeness — timeouts, per-host rate limit


    readFile("test.txt");
    return 0;
}