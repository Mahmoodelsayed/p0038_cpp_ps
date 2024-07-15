#include <iostream>

void special_counter(int end, int start, int step);

int main()
{
    special_counter(20);
    special_counter(20, 10);
    special_counter(20, 10, 5);
    special_counter(10, 20, -5);
    
    // special_counter(20, 10, -5); // error

    return 0;
}
