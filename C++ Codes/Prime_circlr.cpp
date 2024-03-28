#include <bits/stdc++.h>
using namespace std;

// Generate all primes up toA n using the Sieve of Eratosthenes algorithm
void generatePrimes(int n, vector<int>& primes) {
	vector<bool> isPrime(n+1, true);
	isPrime[0] = isPrime[1] = false;
	for (int i = 2; i <= sqrt(n); i++) {
		if (isPrime[i]) {
			for (int j = i*i; j <= n; j += i) {
				isPrime[j] = false;
			}
		}
	}
	for (int i = 2; i <= n; i++) {
		if (isPrime[i]) {
			primes.push_back(i);
		}
	}
}

// Check if a number is a circular prime
bool isCircularPrime(int n, const vector<int>& primes) {
	string num = to_string(n);
	for (int i = 0; i < num.size(); i++) {
		rotate(num.begin(), num.begin()+1, num.end()); // rotate the digits
		int rotatedNum = stoi(num);
		if (!binary_search(primes.begin(), primes.end(), rotatedNum)) {
			return false;
		}
	}
	return true;
}

// Find all circular primes up to n
void circularPrimes(int n) {
	vector<int> primes;
	generatePrimes(n, primes);
	cout << "Total: " << primes.size() << endl;
	for (int i = 0; i < primes.size(); i++) {
		if (isCircularPrime(primes[i], primes)) {
			cout << primes[i] << " ";
		}
	}
}

// Driver program to test above
int main(void) {
	int n = 1000;
	circularPrimes(n);
	return 0;
}
