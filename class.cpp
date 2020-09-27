#include <stdio.h>
#include <iostream>
using namespace std;

class BritishMoney {
    private:
    unsigned long long f; //переменные класса
    unsigned char s;
    unsigned char p;
    
    public:
    int setBank (unsigned long long bm_f,unsigned char bm_s,unsigned char bm_p){//установка значений объекта класса
        f = bm_f;
        s = bm_s;
        p = bm_p;
    };
    
    //возвращение значений класса
    unsigned long long getBankfunts() {
        return f;
    };
    int getBankshills() {
        return s;
    };
    int getBankpennys() {
        return p;
    };
    
    //форматирование счета
    int formBank(){
        if (p >=12){
            s = s + (p/12);
            p = p%12;
            };
        if (s >= 20){
            f = f + (s/20);
            s = s%20;
            };
        };
        

     
     
    //+   
    
    BritishMoney operator+(BritishMoney& v2){
        
        f = f + v2.f;
        s = s + v2.s;
        p = p + v2.p;
        
    };
    
    //печать счета
    int printBank() {
    std::cout << "Your cash is  " << getBankfunts() <<" funts  " << getBankshills() <<" shillings  "<< getBankpennys() <<" pennies" << std::endl;
    };
    
    //=
    BritishMoney operator=(BritishMoney& v2){
        if ( f == v2.f){
                if (s == v2.s){
                        if (p == v2.p){
                            std::cout << "Both of them absolutely equal, no any doubts 'bout that, m' friend!"<< std::endl;   
                        };
                        if (p > v2.p){
                            std::cout << "Original cash is bigger one"<< std::endl;
                        };
                        if (p < v2.p){
                            std::cout << "Second cash is bigger one"<< std::endl;
                        };
                };
                if (s > v2.s){
                    std::cout << "Original cash is bigger one"<< std::endl;;
                };
                if (s < v2.s){
                    std::cout << "Second cash is bigger one"<< std::endl;
                };
        };
       if (f > v2.f){
        std::cout << "Original cash is bigger one"<< std::endl;;
       };
       if (f < v2.f){
        std::cout << "Second cash is bigger one"<< std::endl;
       };
    };

    //-
    BritishMoney operator-(BritishMoney& v2){
        if (v2.p > p)
        {if (s != 0){
            p = 12 - (v2.p-p);
            s = s - 1;
            }
            else {
                if (f != 0){
            f = f - 1;
            s = 19;
            p = 12 - (v2.p-p);
                }
                else {
                    f=0;
                    s=0;
                    p=0;
                };
            };
        }
    else    p = p - v2.p;
            if (v2.s > s){
                if (f != 0){
                    f = f-1;
                    s = 20 - (v2.s - s);
                    }
                else {
                    s=0;
                    f=0;
                    p=0;
                };
            }
    else        s = s - v2.s;
                if ( v2.f > f){
                    f=0;
                    s=0;
                    p=0;
                }
    else            f = f - v2.f;
    };
    
    //умножение
    int multBank(float Xm){
        int op,os=0;
        op = p+s*12+f*240;
        f = 0;
        
        
        op = op*Xm;
        if (op >=12){
            os = os + (op/12);
            op = op%12;
            };
        if (os >= 20){
            f = f + (os/20);
            os = os%20;
            };
        
        s = os;
        p = op;
    };
    
    //delenie
    int divBank(float Xm){
        int op,os=0;
        op = p+s*12+f*240;
        f = 0;
        
        
        op = op/Xm;
        if (op >=12){
            os = os + (op/12);
            op = op%12;
            };
        if (os >= 20){
            f = f + (os/20);
            os = os%20;
            };
        
        s = os;
        p = op;
    };
    
    //cash1/cash2
    BritishMoney operator/(BritishMoney& v2){
        float op,op2,ratio;
        op = p+s*12+f*240;
        op2 = v2.p +v2.s*12+v2.f*240;
        ratio = op/op2;
        std::cout << "cash ratio is " << ratio << std::endl;
    };
};
