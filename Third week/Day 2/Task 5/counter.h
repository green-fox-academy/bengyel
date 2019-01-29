#ifndef UNTITLED60_COUNTER_H
#define UNTITLED60_COUNTER_H
class Counter{
    int field_value = 0;
    int reset_value =0;
public:
    Counter(int _field_value);
    Counter();
    void add(int anothernum);
    void add();
    int get();
    void reset();
};

#endif //UNTITLED60_COUNTER_H
