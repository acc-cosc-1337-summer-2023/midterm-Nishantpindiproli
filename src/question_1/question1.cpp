#include "question1.h"

bool test_config()
{
    return true;

}
int get_earned_points(int books){
if (books>0&& books<6){
    return books;
}  
 else if (books >5&& books <11)
{ 
    return books *5;
}
else if (books >10&& books <16)
{ 
    return books *10;
}
else {
    return books *15;
}
}




