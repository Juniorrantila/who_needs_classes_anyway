
#include "not_class.h"

void add(not_class *this){
    this->a += this->b;
}

not_class not_constructor(int a, int b){
    not_class this;
    this.a = a;
    this.b = b;
    this.add = (void*) add;
    
    return this;
}
