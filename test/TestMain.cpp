#include "../src/main.h"
#include <assert.h>

void testGetTriangleType() {
    assert(getTriangleType(3, 4, 5) == 0);

}

void testGetcircleType()
{
    assert(getcircleType(3,4,5) == 0) ;
}

int main() {
    assert(addNumber(5, 2) == 7);
    testGetTriangleType();
    testGetcircleType();
    return 0;
}
