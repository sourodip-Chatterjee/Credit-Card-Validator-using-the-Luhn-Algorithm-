# Credit-Card-Validator-using-the-Luhn-Algorithm-
# 💳 Credit Card Validator (C++)

This project is a simple yet powerful credit card validator built in C++ using the **Luhn Algorithm**. It can check if a credit/debit card number is valid across various major providers like:

- Visa
- MasterCard
- American Express
- Discover

## ✅ How It Works

The validator uses the **Luhn Algorithm**, which:
1. Doubles every second digit from the right.
2. If doubling results in a number > 9, subtract 9.
3. Sum all the digits.
4. If the total modulo 10 is 0, the card number is valid.

## 📂 Sample Card Numbers (for testing)

```txt
American Express     - 378282246310005
American Express     - 371449635398431
AmEx Corporate       - 378734493671000
Discover             - 6011111111111117
Discover             - 6011000990139424
MasterCard           - 5555555555554444
MasterCard           - 5105105105105100
Visa                 - 4111111111111111
Visa                 - 4012888888881881
Visa (13-digit)      - 4222222222222

