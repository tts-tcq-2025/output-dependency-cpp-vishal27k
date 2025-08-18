#include <iostream>
#include <assert.h>

char size(int cms) {
    if(cms < 38) {
        return 'S';
    } else if(cms > 38 && cms < 42) {
        return 'M';
    } else if(cms > 42) {
        return 'L';
    }
    return '\0';
}

void testTshirtSize() {
    std::cout << "\nTshirt size test\n";
    assert(size(37) == 'S');
    assert(size(40) == 'M');
    assert(size(43) == 'L');
    assert(size(38) == 'M');
    assert(size(42) == 'L');
    std::cout << "All is well (maybe!)\n";
}


