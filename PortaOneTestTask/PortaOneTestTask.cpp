#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <chrono>
#include <fstream>
#include <string>

bool isFileEmpty(std::ifstream& file) 
{
    return file.peek() == std::ifstream::traits_type::eof();
}

void function1()
{
    FILE* file;

    errno_t err;

    err = fopen_s(&file, "10m.txt", "r");

    char line[12];
    int number;

    if (file != NULL)
    {
        

        while (fgets(line, sizeof(line), file))
        {
            number = std::atoi(line);
            std::cout << number << std::endl;
        }

        fclose(file);
    }
    else
    {
        fprintf(stderr, "Unable to open file!\n");
    }
}

int function2()
{
    std::ifstream file("10m.txt");


    if (file.is_open()) 
    {
        if (isFileEmpty(file))
        {
            file.close();
            return 0;
        }

        char line[12];
        int number;

        int maxElement = std::numeric_limits<int>::min();
                
        while (file.read(line, 11))
        {
             number = std::stoi(line);
             if (number > maxElement)
             {
                 maxElement = number;
             }             
        }

        std::cout << maxElement << std::endl;
        return maxElement;

        file.close();
    }
    else 
    {        
        std::cerr << "Unable to open file!" << std::endl;
    }
}

int main()
{
    //// Measure execution time of function1
    //auto start1 = std::chrono::high_resolution_clock::now();
    //function1();
    //auto end1 = std::chrono::high_resolution_clock::now();
    //std::chrono::duration<double> duration1 = end1 - start1;
    
    // Measure execution time of function2
    auto start2 = std::chrono::high_resolution_clock::now();
    function2();
    auto end2 = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> duration2 = end2 - start2;

    //std::cout << "Execution time of function1: " << duration1.count() << " seconds\n";
    std::cout << "Execution time of function2: " << duration2.count() << " seconds\n";

    return 0;
}
