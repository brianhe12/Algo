
class Student{
  private:
    int scores[5];
    int sum;
  public:
    void input()
    {
        for(int i = 0; i < 5; i++)
        {
            cin >> scores[i];
            sum = sum + scores[i];
        }
    }
    
    int calculateTotalScore()
    {
        return sum;
    }
};