class BadLengthException{
  private: 
    int n;
  public:
    BadLengthException(int err) {
            n = err;
        }
    int what(){
        return n;
    }
};