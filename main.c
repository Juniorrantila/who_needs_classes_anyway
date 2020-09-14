
#include <stdio.h>
#include "not_class.h"


int main(){
    not_class not_object = not_constructor(1, 2);
    not_object.add(&not_object);
    
    return not_object.a;
}

