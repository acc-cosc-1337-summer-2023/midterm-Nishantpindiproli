#include <iostream>
#include "question3.cpp"

    int main()
{
    double kilograms;
    double velocity;
    while (true){
        std::cout<< "enter kilograms"<<std::endl;
        std::cin>> kilograms;
        std::cout<< "enter velocity"<<std::endl;
        std::cin>>velocity;
        double answer = get_kinetic_energy(kilograms,velocity);
        std::cout<<answer<<std::endl;
        char cont;
        std::cout<<"do you want to continue(Y/N)"<<std::endl;
        std::cin>>cont;
        if (cont=='N'){
            break;

        }
        

    }  

    return 0;
}