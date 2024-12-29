 #include <bits\stdc++.h>
 using namespace std;

// Function to count almost primes
int countAlmostPrimes(int n) {
    // Step 1: Initialize a sieve to find prime numbers
    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; i * i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    // Step 2: Count the number of distinct prime divisors for each number
    vector<int> prime_divisors_count(n + 1, 0);
    for (int i = 2; i <= n; ++i) {
        if (is_prime[i]) {
            for (int j = i; j <= n; j += i) {
                prime_divisors_count[j]++;
            }
        }
    }

    // Step 3: Count numbers with exactly two distinct prime divisors
    int almost_prime_count = 0;
    for (int i = 1; i <= n; ++i) {
        if (prime_divisors_count[i] == 2) {
            almost_prime_count++;
        }
    }

    return almost_prime_count;
}

int main() {
    // Input
    int n;
   
    cin >> n;

    // Output
    cout << countAlmostPrimes(n) << endl;

    return 0;
}

