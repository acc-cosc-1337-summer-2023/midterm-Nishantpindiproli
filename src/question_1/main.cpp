#include <iostream>
#include "question1.cpp"
int main()
{
    int books;
    while (true){
        std::cout<< "enter widgets sold"<<std::endl;
        std::cin>> books;
        if (books<0 ){
            continue;
    
        }
        else{
          books=get_earned_points(books);  
          std::cout<<"points earned " <<books<<std::endl;
        }
        char answer;
        std::cout<<"do you want to continue(Y/N)"<<std::endl;
        std::cin>>answer;
        if (answer=='N'){
            break;
        }
        

    }  

    return 0;
}