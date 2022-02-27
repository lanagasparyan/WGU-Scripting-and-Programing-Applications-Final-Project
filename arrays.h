#pragma once
#include <iostream>

/*
This template class will implement basic functionality similar to vector class. 
We can give any class like Student and it will create array pointer and constructor
can take the base size of the list.
We can improve this class further but right now I am leaving it at bare minimum
to support functionality of rest of the project.
*/

template <class T>
class List
{
    private:
        T *_t_arr; // generic array pointer for template
        int index;

    public:
        List(int size = 10){
            _t_arr = new T[size];
            index = -1;
        }

        void add(T t){
            index++;
            _t_arr[index] = t;
        }

        void remove(int position){
            if(position > index){
                throw std::invalid_argument("position is greater than length of list");
            }
            int i = position;
            while(i <= index)
            {
                _t_arr[i] = _t_arr[i+1];
				i++;
            }
            index--;
        }

        int size(){
            return index+1;
        }

        T at(int position){
            if(position > index){
                throw std::invalid_argument("position is greater than length of list");
            }
                
            return _t_arr[position];
        }
};
