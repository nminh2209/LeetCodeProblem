class Solution {
public:
    bool isHappy(int n) {
        auto getNext = [](int num) {
            int sum = 0;
            while (num > 0) {
                int digit = num % 10; 
                sum += digit * digit; 
                num /= 10; 
            }
            return sum;
        };

       
        int slow = n;
        int fast = getNext(n);

        while (fast != 1 && slow != fast) {
            slow = getNext(slow); 
            fast = getNext(getNext(fast)); 
        }

        return fast == 1; 
    }
};
