class Solution:
    def numberOfSets(self, n: int, k: int) -> int:
        MOD = 10**9 + 7

        N = n + k - 1

        fact = [1] * (N + 1)
        for i in range(1, N + 1):
            fact[i] = fact[i - 1] * i % MOD

        invFact = [1] * (N + 1)
        invFact[N] = pow(fact[N], MOD - 2, MOD)

        for i in range(N, 0, -1):
            invFact[i - 1] = invFact[i] * i % MOD

        return (
            fact[N]
            * invFact[2 * k]
            % MOD
            * invFact[N - 2 * k]
            % MOD
        )