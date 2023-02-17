#include "Services/numbers_user.cpp"
#include "Services/operations.cpp"
#include "Services/choose_operation.cpp"
#include "Services/exception_zero.cpp"

int main(int argc, char const *argv[]){
    bool exit = false;
    
    while (exit == false){
        int operation = choose_operation();
        float number1 = choose_number();
        float number2 = choose_number();
        
        if (operation == 1){
            cout << "The sum of : " << number1 << " and " << number2 << " is: " << add(number1, number2) << endl;
        }else if(operation == 2){
            cout << "The subtract of : " << number1 << " and " << number2 << " is: " << subtract(number1, number2) << endl;
        }else if(operation == 3){
            cout << "The multiply of : " << number1 << " and " << number2 << " is: " << multiply(number1, number2) << endl;
        }else if(operation == 4){
            if(excep_zero(number2) ==  true){
                cout << "Sorry try again, i cant divide for 0" << endl;
            }else{
                cout << "The split of : " << number1 << " and " << number2 << " is: " << split(number1, number2) << endl;
            }
        }else if(operation == 5){
            cout << "See you soon" << endl;
            exit = true;
        }
}
    return 0;
  
}
