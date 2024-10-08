//
// Created by Lee ChenZe on 10/8/24.
//

#include <stdio.h>
#include <iostream>

using namespace std;

void polymorphism_base_concept();

void polymorphism_application_scenario();

void polymorphism_obj_model();

void destruct_derived_classes();

void pure_virtual_func_abstract_class();

int main() {
    /** =========多态的基本概念(polymorphism_base_concept)========= */
    polymorphism_base_concept();

    /** =========多态的应用场景(polymorphism_application_scenario)========= */
    polymorphism_application_scenario();

    /** =========多态的对象模型(polymorphism_obj_model)========= */
    polymorphism_obj_model();
    /** =========如何析构派生类(destruct_derived_classes)========= */
    destruct_derived_classes();
    /** =========纯虚函数和抽象类(pure_virtual_func_abstract_class)========= */
    pure_virtual_func_abstract_class();


};

