#pragma once
namespace bhm_utils {

    template <class List, class UnaryFunction> 
void for_each(List& values, UnaryFunction f){
    
    auto first = values->begin();
    for(; first != values->end(); first++){
        if(first->lock() != NULL){
            f(first);
        } else {
            auto deleteElement = first;
            first--;
            values->erase(deleteElement);
        }
    }
}

}