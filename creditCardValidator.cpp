// Validating Credit Card. (Luhn Algo.)
#include <iostream>
#include <string>
#include <cctype>

// Function to check if the card number is valid using the Luhn Algorithm.
bool isValidCard(const std::string &cardNumber)
{
    int sum = 0;
    bool doubleDigit = false;

    // Traverse from the end of the string.
    for (int i = cardNumber.length() - 1; i >= 0; i--)
    {
        if (!isdigit(cardNumber[i]))
            return false; // Make sure all characters are digits.

        int digit = cardNumber[i] - '0';

        if (doubleDigit)
        {
            digit *= 2;
            if (digit > 9)
                digit -= 9;
        }

        sum += digit;
        doubleDigit = !doubleDigit;
    }

    return (sum % 10 == 0);
}

// Function to get the card type.
std::string getCardType(const std::string &cardNumber)
{
    if (cardNumber.length() >= 2)
    {
        if (cardNumber[0] == '4')
            return "Visa";
        if (cardNumber.substr(0, 2) == "34" || cardNumber.substr(0, 2) == "37")
            return "American Express";
        if (cardNumber.substr(0, 2) >= "51" && cardNumber.substr(0, 2) <= "55")
            return "MasterCard";
        if (cardNumber.substr(0, 4) == "6011")
            return "Discover";
    }
    return "Unknown";
}

// Function to format the card number (e.g., 1234 5678 9012 3456).
std::string formatCardNumber(const std::string &cardNumber)
{
    std::string formatted = "";
    for (size_t i = 0; i < cardNumber.length(); ++i)
    {
        if (i > 0 && i % 4 == 0)
            formatted += " ";
        formatted += cardNumber[i];
    }
    return formatted;
}

int main()
{
    std::string cardNumber;
    std::cout << "Enter your credit card number: ";
    std::cin >> cardNumber;

    if (isValidCard(cardNumber))
    {
        std::cout << "\n Card is valid.\n";
        std::cout << "Card Type: " << getCardType(cardNumber) << "\n";
        std::cout << "Formatted Number: " << formatCardNumber(cardNumber) << "\n";
    }
    else
    {
        std::cout << "\n Invalid card number.\n";
    }

    return 0;
}
