# Sieve of Eratosthenes
The Sieve of Eratosthenes is an efficient algorithm used to **find all prime numbers up to a given limit n**.

The algorithm works by **iteratively sieving out composite numbers**, leaving only the prime numbers behind. <br>
The Sieve of Eratosthenes algorithm efficiently **generates prime numbers by eliminating all composite numbers**. It takes advantage of the fact that **any non-prime number can be represented as a product of prime numbers**. By marking the multiples of each prime, it ensures that they are not considered prime in subsequent iterations.

The Sieve of Eratosthenes has a **time complexity of O(n log log n)** and is highly efficient for finding prime numbers up to a moderate limit.

Main advantage is that it eliminates the need for individual divisibility checks, making it very fast, especially for smaller 'n' values.
