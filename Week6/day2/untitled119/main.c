#include <stdio.h>
#include <stdint.h>

// Use the Computer struct, give values to the fields and print them out in the main!
// Use the Notebook struct, give values to the fields and print them out in the main!

struct Computer {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
};

typedef struct {
    float cpu_speed_GHz;
    int ram_size_GB;
    int bits;
} Notebook;

int main()
{
    struct Computer asus;
    asus.cpu_speed_GHz = 1000.17;
    asus.bits = 5000;
    asus.ram_size_GB = 4000;

    Notebook lenovo;
    lenovo.ram_size_GB = 4000;
    lenovo.bits = 30000;
    lenovo.cpu_speed_GHz = 3000.32;

    printf("Asus's cpu speed is: %.2f bits are: %d ram size is: %d\n", asus.cpu_speed_GHz, asus.bits, asus.ram_size_GB);
    printf("Lenovo notebook's cpu speed is: %.2f bits are: %d ram size is: %d", lenovo.cpu_speed_GHz, lenovo.bits, lenovo.ram_size_GB);
    return 0;
}