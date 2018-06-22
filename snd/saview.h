#ifndef SAVEVIEW_H
#include <array>
#include <vector>
#include <set>
#include <algorithm>


template<typename T>
class sorted_array_view {
public:
    sorted_array_view(T* array, size_t size) {
        append(array, size);
    }

    void append(T* array, size_t size) {
        for( int idx = 0; idx < size; ++idx)
        //for(auto it = array.begin(); it != array.end(); ++it)
        {
            std::cout << "value of array at " << idx <<": "<< array[idx] << std::endl;
            //std::cout << "value of array: " << it << std::endl;
            data.push_back(array[idx]);
            //data.push_back(it);
           //  data.insert(array[idx]);
        }
        //sort(first(),last(), data);
        //std::sort(data.begin(), data.end());
        std::sort(data.begin(), data.end());
        std::cout<<"VEC: "<<std::endl;

        for( int idx = 0; idx < size; ++idx)
        {
            std::cout << "value of array at " << idx <<": "<< array[idx] << std::endl;
        }
    }

    T at(size_t index) const {
        return data[index];
        //std::advance(iter, index);
        //return iter;
    }

    size_t size() {
        return data.size();
    }

    const size_t size() const {
        return data.size();
    }

private:
    size_t first() {
        return data[0];
    }
    size_t last() {
        return data[data.size()-1];
    }
    //void sort (sorted_array_view first, sorted_array_view last, std::vector<T>);

    // Iterator to the beginning of set
    //std::set<typename T>::iterator iter = data.begin();

    // It will move forward the passed iterator by passed value
    //void advance( T& it, size_t n );
    //std::set<T> data;
    std::vector<T> data;
};

#endif // SAVEVIEW_H
