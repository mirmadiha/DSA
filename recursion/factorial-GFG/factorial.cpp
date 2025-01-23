class Solution {
  public:
    int factorial(int n) {
        if(n==0){
            return 1;
        }
        int answer=n*factorial(n-1);
        return answer;
    }
};
