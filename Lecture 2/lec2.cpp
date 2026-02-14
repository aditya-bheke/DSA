#include<iostream>
using namespace std;
int main(){

    //DATA TYPES

    int age=18;//(4 Bytes)

    char mark='A';//(1 Byte)//single quotes for char and it can store only one character

    string grade="OA";//(10 Bytes+Length of the string)//double quotes for string and it can store more than one character
    //character are stored using ASCII values and A starts forn 65 and a starts from 97

    float PI=3.14f;//(4 bytes)//we write small or capital f after float value because if we don't write it then the compiler thinks it is a double value

    bool istrue=true;//(true->1 and false->0))(1 Byte)

    double price=100.99;//(8 Bytes)

    //TYPE CONVERSION is uded to convert small data type into big data type like char of 1 byte to int of 4 byte

    char letter='A';
    int value=letter;
    cout<<value<<endl;

    //TYPE CASTING is used to convert big data type into small data type like double to integer

    
    double exam=100.99;
    int newvalue=(int)exam;
    char newstr=(char)exam;
    cout<<newvalue<<endl;
    cout<<newstr<<endl;

    //INPUT
    int roll;
    cout<<"Enter your roll no. ";
    cin>>roll;
    cout<<"Your roll no is:"<<roll<<endl;

    //Operators(when we do operations on int values then answer is integer value so division gives only quotient in int value and it gives complete answer in float or double value)


    //int a=11,b=5;
    int a=11;//(it gives complte answer)
    double b=5;
    int ans=(5/(double)2);//here left there is int do inspite of having double in lright denominator we get ans as integer
    //int sum=a+b  we can also do like this(when int/float the answer will be float when int/double then as is double)
    cout<<"Addition "<<a+b<<endl;
    cout<<"substraction "<<a-b<<endl;
    cout<<"product  "<<a*b<<endl;
    cout<<"quotient "<<a/b<<endl;
    cout<<5/double(2)<<endl;//Type cast
    cout<<ans<<endl;
    //cout<<"modulo  "<<a%b<<endl;

    //Relational operators return boolean answer

    cout<<(3<5)<<endl;
    cout<<(3<=5)<<endl;
    cout<<(3==5)<<endl;
    cout<<(3!=5)<<endl;
    cout<<(3>5)<<endl;
    cout<<(3>=5)<<endl;

    //Logical Operators OR(represented as || and called as Pipe operator) AND (Represented as && and called asampersand) NOT(represented as ! and called as Not)
    cout<<!(3>5)<<endl;//turns false into true and true into false
    cout<<((3>5)||(5>4)||(4>5))<<endl;
    cout<<((3>5)&&(5>4))<<endl;






    cout<<price<<endl;
    cout<<istrue<<endl;
    cout<<PI<<endl;
    cout<<mark<<endl;
    cout<<grade<<endl;
    cout<<sizeof(age)<<endl;
    cout<<"Hello World\n"<<"Aditya Here\n";


    return 0;
}