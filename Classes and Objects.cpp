

// Write your Student class here

class Student
{
    public:
    int scores[5];

    void input()
    {
        for(int i=0;i<5;i++)
        {
            int x;
            cin>>x;
            scores[i]=x;
        }
    }

    int calculateTotalScore()
    {
        int sum=0;
        for(int i=0;i<5;i++)
        {
            sum = sum+ scores[i];
        }
        return sum;
    }
};



