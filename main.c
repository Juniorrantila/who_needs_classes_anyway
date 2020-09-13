
typedef void (*not_method)(void*);

struct not_class {
    int a;
    int b;
    not_method add;
};

void add(struct not_class *this){
    this->a += this->b;
}

struct not_class not_class(int a, int b){
    struct not_class this;
    this.a = a;
    this.b = b;
    this.add = (void*) add;
    
    return this;
}

int main(){
    struct not_class not_object = not_class(1, 2);
    not_object.add(&not_object);
    
    return not_object.a;
}