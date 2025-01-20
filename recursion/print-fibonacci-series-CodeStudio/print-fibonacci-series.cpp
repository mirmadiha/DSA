int fibonacciNumber(int n){
    if(n<=1){
        return n;
    }

    return fibonacciNumber(n-1) + fibonacciNumber(n-2);
    
}
vector<int> generateFibonacciNumbers(int n) {
    // Write your code here.
    //Solved using RECURSION
    vector<int>result;
    for (int i = 0; i < n; i++) {
        int number = fibonacciNumber(i);
        result.push_back(number);
    }
    return result;
    }
