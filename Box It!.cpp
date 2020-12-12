

//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

class Box
{
  int l,b,h;

  public:
   Box()
   {
       l=0;
       b=0;
       h=0;
   }

   Box(int a, int d, int c )
   {
       l=a;
       b=d;
       h=c;
   }

   Box (const Box& x)
   {
       l=x.l;
       b=x.b;
       h=x.h;
   }

   int getLength()
   {
       return this->l;
   }
   int getBreadth ()
   {
       return this->b;
   }

    int getHeight ()
    {
        return this->h;
    }

    long long CalculateVolume()
    {
        return (long long) l*b*h;
    }

    bool operator<(Box& B)
    {
      if ((this->l<B.l) || (this->b<B.b && this->l==B.l) || (this->h<B.h && this->b==B.b &&this->l==B.l))
      {
          return true;
      }
      else
      return false;
    }

    friend ostream& operator<<(ostream& out, Box& B)
    {
        out <<B.l<<" "<<B.b<<" "<<B.h;
        return out;
    }



};



