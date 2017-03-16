#include "number.h"

std::string Number::lessThan20[] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve",
                                "thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
std::string Number::tensPlace[] = {"twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};
std::string Number::hundred = "hundred";
std::string Number::thousand = "thousand";

void Number::print() {
    int digits[4] = {0,0,0,0};
    int num = this->number;
    int i = 3;
    while (num != 0) {
        digits[i] = num % 10;
        num /= 10;
        i--;
    }

    std::cout << std::endl;

    std::stringstream output;

    if (digits[0] > 0) {
        output << lessThan20[digits[0]] << " " << thousand << " "; 
    }    

    if (digits[1] > 0) {
        output << lessThan20[digits[1]] << " " << hundred << " ";
    }


    if (digits[2] == 0 && digits[3] > 0) {
                output << lessThan20[digits[3]];
    } else if (digits[2] == 1) {
        output << lessThan20[10 + digits[3]];
    } else if (digits[2] > 1) {
        output << tensPlace[digits[2] - 2];
        if (digits[3] > 0) {
            output << " " << lessThan20[digits[3]];
        }
    }

    std::cout << output.str() << std::endl;
}
