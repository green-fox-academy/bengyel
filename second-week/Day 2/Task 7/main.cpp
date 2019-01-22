#include <iostream>

int find_value(int *array, int lenght, int num ){
    int index = -1;
    for (int i = 0; i < lenght; ++i) {
        if(array[i] == num){
            index = i;
        } else{
            index = 0;
        }
    }
    return index;
}
int main()
{

    int searched_num = 2;
    int mainarray[5]={2,4,12,32,189};
    int index;
    index = find_value(mainarray, (sizeof(mainarray) / sizeof(mainarray[0])), searched_num);
    if(index >= 0){
        std::cout << searched_num << ", There is on the "<< index << ". place" << std::endl;
    } else{
        std::cout << "There isn't the number" << std::endl;
    }
    return 0;
}