
#pragma once
#include <iomanip>
#include <utility>
#include <iostream>
#include <fstream>

template<typename T> void FileManager::writeFile(T* array, const int arraySize) {
    std::ofstream file(outputFileName);
    file<<arraySize<<std::endl;
    for (int i=0; i<arraySize; i++) {
        file<<array[i]<<std::endl;
    }
    file.close();
}