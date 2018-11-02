/*
class X {
public:
  X();                       // Default constructor with no arguments
  X(int = 0);                // Default constructor with one default argument
  X(int, int , int = 0);     // Constructor
};
*/

class Box
{
    private:
        int l;
        int b;
        int h;
    public:
        Box()
        {
            l = 0;
            b = 0;
            h = 0;
        }
        Box(int length, int breadth, int height)
        {
            l = length;
            b = breadth;
            h = height;
        }
        //Copy Constructor
        Box(const Box& B)
        {
            l = B.l;
            b = B.b;
            h = B.h;
        }
    
        int getLength()
        {
            return l;
        }
        int getBreadth()
        {
            return b;
        }
        int getHeight()
        {
            return h;
        }
        long long CalculateVolume()
        {
            return (long long)l*b*h;
        }
    
    friend bool operator < ( Box A,Box B){
        if( (A.l < B.l) || ((A.b < B.b) && (A.l == B.l)) || ((A.h < B.h) && (A.l == B.l) && (A.b                == B.b)) ){
            return true;
        }else{
            return false;
        }
    };
    
    friend ostream& operator<< (ostream &output, const Box B){
        output << B.l << " " << B.b << " " << B.h;
        return output;
    }
        
};
