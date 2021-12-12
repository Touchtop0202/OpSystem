//
// Created by jue on 2021/11/19.
//

#ifndef DYNAMIC_MEMORY_MANAGE_MEMORY_MANAGE_H
#define DYNAMIC_MEMORY_MANAGE_MEMORY_MANAGE_H
#include <vector>
using namespace std;
class work{
public:
    void area_table_init();
    void FF();
    void memory_recycle();
    static vector<int> area_number;
    static vector<int> area_size;
    static vector<int> area_address;
    static vector<char> area_state;
     work(int size){
         this->size = size;
     }

private:
    int address;
    int size;
    int name;
};

#endif //DYNAMIC_MEMORY_MANAGE_MEMORY_MANAGE_H
