#include "misaligned.cpp"
#include <vector>
#include <string>

vector<string&> capturedLines;
void MockOutputFunc(std::string& lineContent){
    actualManual.push_back(lineContent);
}

void testPrintColorMap() {
    std::cout << "\nPrint color map test\n"; 
    int result = printColorMap(MockOutputFunc); 
    assert(result == 25);
    assert(capturedLines[1]="1 | White | Orange");
    std::cout << "All is well (maybe!)\n";
}
