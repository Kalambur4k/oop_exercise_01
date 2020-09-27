#include <iostream>
#include <stdio.h>
#include "class.cpp"
using namespace std;


//file test
    int filetest(){
        class BritishMoney bank1; //создание объектов
        class BritishMoney bank2;
        unsigned long long inc_f; 
        unsigned int inc_s, inc_p;
        float mlt;
        

    std::cin >> inc_f;
    std::cin >> inc_s;
    std::cin >> inc_p;
    bank1.setBank (inc_f, inc_s, inc_p);
         
    std::cin >> inc_f;
    std::cin >> inc_s;
    std::cin >> inc_p;
    bank2.setBank (inc_f, inc_s, inc_p);
    
    std::cin >> mlt;
         
         std::cout << "1st bank" << std::endl;
         bank1.formBank();
         bank1.printBank();
         std::cout << "2nd bank" << std::endl;
         bank2.formBank();
         bank2.printBank();
         
         std::cout << "b1+b2" << std::endl;
         bank1+bank2;
         bank1.formBank();
         bank1.printBank();
         
         std::cout << "b1-b2" << std::endl;
         bank1-bank2;
         bank1.printBank();
         
         std::cout << "b1*n" << std::endl;
         bank1.multBank(mlt);
         bank1.printBank();
         
         std::cout << "b1/n" << std::endl;
         bank1.divBank(mlt);
         bank1.printBank();
         
         std::cout << "b1/b2" << std::endl;
         bank1/bank2;
         
         std::cout << "b1/b2" << std::endl;
         bank1=bank2;
         
         std::cout << "End of file auto test. Good bye!" << std::endl;
         return 0;
    };
        
    
    
//menu
    int printmenu(){
    std::cout << "What shall we do? 1 - 7" << std::endl;
    std::cout << "1 - show current cash" << std::endl;
    std::cout << "2 - Add  (+)" << std::endl;
    std::cout << "3 - Cut some money from cash 1 (-)" << std::endl;
    std::cout << "4 - mult cash1 (*)" << std::endl;
    std::cout << "5 - div cash1 (/)" << std::endl;
    std::cout << "6 - compare cash1 to somthing" << std::endl;
    std::cout << "7 - div cash on cash" << std::endl;
    std::cout << "---------------------------------------" << std::endl;
    std::cout << "8 - exit" << std::endl;
    std::cout << "9 - print help" << std::endl;
    };
    

int main() {
    class BritishMoney bank1; //создание объектов
    class BritishMoney bank2;
    unsigned long long inc_f; //vvod start denyak
    unsigned int inc_s;
    unsigned int inc_p;
    int a = -1; //переменная для switch
    float mult;
    
    std::cout << "OOP lab #1. Author: Velesov Daniil M8O - 208B - 19." << std::endl;
    std::cout << "select work mode:" << std::endl;
      std::cout << "1 - auto test" << std::endl;
      std::cout << "2 - manual work mode" << std::endl;
      std::cout << "3 - exit" << std::endl;
      while (a != 3){
    std::cin >> a;
            if(a == 1){
                filetest();
                return 0;
                };
            if(a == 2){
    std::cout << "Hello there. It is a British Money calculator.\n Can you please enter your cash here?" << std::endl;
    std::cout << "Enter funts:" << std::endl;
    std::cin >> inc_f;
    std::cout << "Enter shills:" << std::endl;
    std::cin >> inc_s;
    std::cout << "Enter pennies:" << std::endl;
    std::cin >> inc_p;
    
    bank1.setBank (inc_f, inc_s, inc_p);//перенос значений с клавиатуры в объект 1
    std::cout << "Your current score is  " << bank1.getBankfunts() <<" funts  " << bank1.getBankshills() <<" shillings  "<< bank1.getBankpennys() <<" pennys" << std::endl;
    bank1.formBank ();
    std::cout << "Your current formatized score is  " << bank1.getBankfunts() <<" funts  " << bank1.getBankshills() <<" shillings  "<< bank1.getBankpennys() <<" pennys" << std::endl;
    //-,*,/
    printmenu();
    //меню выбора
    while (a != 8){
    std::cin >> a;
        if(a==1){
            std::cout << "Your current score is  " << bank1.getBankfunts() <<" funts  " << bank1.getBankshills() <<" shillings  "<< bank1.getBankpennys() <<" pennys" << std::endl;
        };
        if(a==2){
            std::cout << "Lets add some cash to your account, can we?\n Enter value which you want to be added:"<< std::endl; //+
            std::cout << "Enter funts:" << std::endl;
            std::cin >> inc_f;
            std::cout << "Enter shills:" << std::endl;
            std::cin >> inc_s;
            std::cout << "Enter pennies:" << std::endl;
            std::cin >> inc_p;
            bank2.setBank (inc_f, inc_s, inc_p);
            bank1+bank2;
            bank1.formBank ();
            std::cout << "DONE!" << std::endl;
        };
        
        if(a==3){
             std::cout << "Lets cut some cash from your account, can we?\n Enter value which you want to be cutted:"<< std::endl; //-
            std::cout << "Enter funts:" << std::endl;
            std::cin >> inc_f;
            std::cout << "Enter shills:" << std::endl;
            std::cin >> inc_s;
            std::cout << "Enter pennies:" << std::endl;
            std::cin >> inc_p;
            bank2.setBank (inc_f, inc_s, inc_p);
            bank1-bank2;
            std::cout << "DONE!" << std::endl;
        }
        
        if(a==4){
             std::cout << "Lets multiplie cash on your account, can we?\n"<< std::endl; //*
            std::cout << "Enter multiplier:" << std::endl;
            std::cin >> mult;
            bank1.multBank(mult);
            std::cout << "DONE!" << std::endl;
            
        }
        
        if(a==5){
            std::cout << "Lets divide cash on your account, can we?\n"<< std::endl; // cash/n
            std::cout << "Enter divider:" << std::endl;
            std::cin >> mult;
            bank1.divBank(mult);
            std::cout << "DONE!" << std::endl;
        }
        
        if(a==6){
            std::cout << "Compare" << std::endl; //==
            std::cout << "Enter funts:" << std::endl;
            std::cin >> inc_f;
            std::cout << "Enter shills:" << std::endl;
            std::cin >> inc_s;
            std::cout << "Enter pennies:" << std::endl;
            std::cin >> inc_p;
            bank2.setBank (inc_f, inc_s, inc_p);
            bank1=bank2;
        };
        
        if(a==7){
            std::cout << "Divide cash1 on other cash" << std::endl; //cash1/cash2
            std::cout << "Enter funts:" << std::endl;
            std::cin >> inc_f;
            std::cout << "Enter shills:" << std::endl;
            std::cin >> inc_s;
            std::cout << "Enter pennies:" << std::endl;
            std::cin >> inc_p;
            bank2.setBank (inc_f, inc_s, inc_p);
            bank1/bank2;
        };
        
        if(a==8){ //exit
            return 0;
        }
        if(a==9){
            printmenu();
        };
    };
        return 0;
    }; 
    return 0;   
}; return 0;
};
