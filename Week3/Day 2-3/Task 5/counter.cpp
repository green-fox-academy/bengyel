#include "counter.h"
Counter::Counter(int _field_value){
    field_value = _field_value;
    reset_value = _field_value;
}
Counter::Counter(){}
void Counter::add(int anothernum)
{
    field_value += anothernum;
}
void Counter::add()
{
    field_value++;
}
int Counter::get()
{
    return field_value;
}
void Counter::reset()
{
    field_value = reset_value;
}