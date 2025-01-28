#include <iostream>
#include <stdio.h>



int main(){
    // Signed Short Variables
    signed short signedOne = 1;
    signed short signedMax = 32767;
    signed short signedOverflow = 32768;

    // Unsigned Short Variables
    unsigned short unsignedOne = 1;
    unsigned short unsignedMax = 32767;
    unsigned short unsignedOverflow = 32768;

    // Printing signed values
    printf("Signed Value 1: %hd\n", signedOne);
    printf("Signed Maximum Value: %hd\n", signedMax);
    printf("Signed Overflow Value: %hd\n\n", signedOverflow);
    
    // Printing unsigned values
    printf("Unigned Value 1: %hu\n", unsignedOne);
    printf("Unsigned Maximum Value: %hu\n", unsignedMax);
    printf("Unsigned Overflow Value: %hu\n\n", unsignedOverflow);    
    
    return 0;
}
