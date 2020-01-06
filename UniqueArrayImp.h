#ifndef EX3_UNIQUEARRAYIMP_H
//constructor
template <class Element,class Compare>
UniqueArray<Element,Compare>::UniqueArray(unsigned int size):
    size(size), arr(new Element *[size]={NULL}) {};

//copy constructor
template <class Element,class Compare>
UniqueArray<Element,Compare>::UniqueArray(const UniqueArray& other):
    size(other.size), arr(new Element *[size]={NULL}) {
    for (int i=0; i<size; i++) {
        if (other.arr[i] != NULL) {
            Element* copy = new Element(*other.arr[i]);
            arr[i] = copy;
        }
    }
    {};

//destructor
template <class Element,class Compare>
UniqueArray<Element,Compare>::~UniqueArray() {
    delete[] arr;
}

template <class Element,class Compare>
bool UniqueArray<Element,Compare>::getIndex(const Element& element, unsigned int& index) const{
    //check if element is null???
    for (int i = 0; i<size; i++){
        if (Compare(element , *arr[i])){
            index = i;
            return true;
        }
    }
    return false;
}

template <class Element,class Compare>
unsigned int UniqueArray<Element,Compare>::find_first_empty() {
    //צריך לאתחל את כל המערך לNULL בהתחלה?
    for (int i=0; i<size; i++){
        if (arr[i] == NULL){
            return i;
        }
    }
    throw UniqueArrayIsFullException{};
}

template <class Element,class Compare>
unsigned int UniqueArray<Element,Compare>::insert(const Element& element){

    unsigned int i;
    if (getIndex(element , i) ==true){
        return i;
    }
    try {
        find_first_empty();
    }catch (UniqueArrayIsFullException()){

    }

}



            #define EX3_UNIQUEARRAYIMP_H
#endif //EX3_UNIQUEARRAYIMP_H
