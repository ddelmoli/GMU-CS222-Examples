#include <stdio.h> 
int main()
{
    int integer = 2345;
    float decimal = 2345.6789;
    // Prints the number right justified within 6 columns
    printf("4 digit integer right justified to 6 column: %6d\n",integer);
    // Rounds to two digit places
    printf("Floating point number rounded to 2 digits: %.2f\n",decimal);
    // Rounds to 0 digit places
    printf("Floating point number rounded to 0 digits: %.f\n",decimal);
    // Prints the number in exponential notation(scientific notation) 
    printf("Floating point number in exponential form: %e\n",decimal); 
    return 0;
}