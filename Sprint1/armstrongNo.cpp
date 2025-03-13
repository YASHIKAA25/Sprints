a)  int original = number;
    int sum = 0;
    
    // Process each digit
    while (number > 0) {
        int digit = number % 10;
        // Calculate cube of digit (for a 3-digit Armstrong number)
        sum += digit * digit * digit; // Alternatively: sum += pow(digit, 3);
        number /= 10;
    }
    
    return (sum == original);

b)  // Precompute cubes for digits 0 through 9
    int cube[10] = {0, 1, 8, 27, 64, 125, 216, 343, 512, 729};
    
    int original = number;
    int sum = 0;
    
    // Process each digit using the precomputed cube values
    while (number > 0) {
        int digit = number % 10;
        sum += cube[digit]; // Lookup cube instead of calculating it each time
        number /= 10;
    }
    
    return (sum == original);

NOTE: If you check every 2‑digit number, you’ll find that no 2‑digit number satisfies this condition. 
EXAMPLES : 153, 370, 371, 407, 1634, 8208, 9474.
