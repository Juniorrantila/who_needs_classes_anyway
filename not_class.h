
#ifndef NOT_CLASS_H
#define NOT_CLASS_H

typedef void (*not_method)(void*);

typedef struct not_class_s {
    int a;
    int b;
    not_method add;
} not_class;

void add(not_class *this);
not_class not_constructor(int a, int b);

#endif