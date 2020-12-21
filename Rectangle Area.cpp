

class Rectangle
{

  public:
  int l,b;

  void display()
  {
      cout<<l<<" "<<b<<endl;
  }
};

class RectangleArea:public Rectangle
{
    //int l,b;

    public:
    void read_input()
  {
      int x,y;
      cin>>x>>y;
      l=x;
      b=y;
  }
  void display()
  {
      cout<<l*b<<endl;
  }
};


