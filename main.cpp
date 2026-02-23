#include <iostream>
#include <vector>
#include <memory>

using namespace std;

struct cpu
{
    using BYTE = unsigned char ; // 8 byts 
    using WORD = unsigned short ; // 16 byts

    WORD PC ; // PROGGRAM COUNTER 
    WORD SP ;// STACK POINTER
     
    // registers
    BYTE A;
    BYTE X;
    BYTE Y;

    //FLAGS
   BYTE C : 1;// COUNTER FLAG
   BYTE D : 1;// DECIMAL FLAG
   BYTE Z : 1;// ZERO FLAG
   BYTE O : 1;//OVERFLOW
   BYTE N : 1;
   BYTE V : 1;
   BYTE B : 1;
   BYTE I : 1;

   void reset()
{
  PC = 0xffc ;
  SP = 0x100 ;


};

};

class memory
{
    static const int x = 800000;
    int MAX_mem[x];//whole mem of cpu 
};

class execute
{

};

int main()
{

 cpu CPU ;
 CPU.reset();

}