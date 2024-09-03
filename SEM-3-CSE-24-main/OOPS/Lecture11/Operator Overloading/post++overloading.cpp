//Now convert member and global functions into operator overloading.


#include <iostream>
using namespace std;

class marks{
    int a;
    int b;
    public:
    marks(int a =0, int b=0){
       this-> a = a;
       this-> b = b;
    }
    void print(){
        cout << a<< " "<< b<<endl;
    }
    marks operator ++(int) {
        marks temp = *this;
        this->a += 1;
        this->b += 1;
        return *this;
    }
  
    friend marks operator --(marks &, int);
};

marks operator -- (marks &obj, int){
    marks temp = obj;
    obj.a -= 1;
    obj.b -= 1;
    return temp;
}

int main() {
   marks s1(10, 20);
   marks s2(15, 25);
s1.print(), s2.print();
  // marks s3 = s1.add();
   s1++;
   s1.print();
   //s3.print();
   
   //marks s4 = sub(s2);
   s2--;
   s2.print();
   //s4.print();

    return 0;
}
