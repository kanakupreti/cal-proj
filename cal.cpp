#include<iostream>
using namespace std;
class temp{
    public:
    int a,b,c;
    char op;
    void getvalue1();
    void getvalue2();
    void getop();
    void add();
    void sub();
    void mul();
    void divide();
  
    
    
}obj;


  
  int main(){
      
     obj.getvalue1();
     while(1){
        
        
        obj.getop();
        if(obj.op == '='){
            cout<< "\nfinal answer :: "<<obj.a;
            break;
            return 1;
            
        }
    
    
    
   
    obj.getvalue2();
    if(obj.op == '+')
    obj.add();
     if(obj.op == '-')
    obj.sub();
     if(obj.op == '*')
    obj.mul();
     if(obj.op == '/')
    obj.divide();
    }
    
    return 0;
}
void temp :: getvalue1(){
    cout<< "enter the value ::  \n";
    cin>>a;
}

void temp :: getvalue2(){
    cout<< "enter the value :: \n ";
    cin>>b;
}
void temp :: getop(){
    cout<< "enter the operator ::  \n";
    cin>>op;
    
}

void temp :: add(){
    c = a+b;
    cout<<a<<" + "<<b<<" :: " <<c;
    a = c;
    b = 0;
}


void temp :: sub(){
    c = a - b;
    cout<<a<<" - "<<b<<" :: " <<c;
    a = c;
    b = 0;
}

void temp :: mul(){
    c = a * b;
    cout<<a<<" * "<<b<<" :: " <<c;
    a = c;
    b = 0;
}

void temp :: divide(){
    c = a/b;
    cout<<a<<" / "<<b<<" :: " <<c;
    a = c;
    b = 0;
    
    
    
    
}