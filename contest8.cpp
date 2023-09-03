// Weekly Contest 361
//1 out of 4
//7020. Count Symmetric Integers
//tc O(n*n)
//sc O(1)
class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
       int count = 0;

    for (int i = low; i <= high; i++) {
        std::string num = std::to_string(i);
        if (num.length() % 2 == 0) {
            int halfLength = num.length() / 2;
            int sumFirstHalf = 0;
            int sumSecondHalf = 0;

            for (int j = 0; j < halfLength; j++) {
                sumFirstHalf += num[j] - '0';
                sumSecondHalf += num[j + halfLength] - '0';
            }

            if (sumFirstHalf == sumSecondHalf) {
                count++;
            }
        }
    }

    return count;
    }
};