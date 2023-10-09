def calcGDC(n:int, m: int) -> int:
    # Write your code here
    while m:
        n , m= m , n % m
    return n