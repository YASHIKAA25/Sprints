a) if (n <= 1) return false;  // 0 and 1 are not prime numbers
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;  // Found a divisor, not prime
    }
    return true;

b) if (n <= 1) return false;  // 0 and 1 are not prime
    // Check divisibility up to sqrt(n)
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
            return false;
    }
    return true;

c) if (n <= 1) return false;
    if (n == 2) return true;      // 2 is prime
    if (n % 2 == 0) return false; // Exclude other even numbers

    // Check only odd numbers up to sqrt(n)
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
