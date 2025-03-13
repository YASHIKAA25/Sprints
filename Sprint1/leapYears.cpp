a) if (year % 4 == 0) {
        // If it is, check if it is also divisible by 100
        if (year % 100 == 0) {
            // If it is divisible by 100, check if it is divisible by 400
            if (year % 400 == 0)
                return true;  // Divisible by 400: leap year
            else
                return false; // Divisible by 100 but not by 400: not a leap year
        } else {
            return true;      // Divisible by 4 and not by 100: leap year
        }
    } else {
        return false;         // Not divisible by 4: not a leap year
    }

b)  // A year is a leap year if:
    // - It is divisible by 4 and not divisible by 100, or
    // - It is divisible by 400.
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
