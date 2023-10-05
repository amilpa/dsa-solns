def reverseBits(n):
    # Write your code here.
    num = ""
    if n == 0:
        return 0
    while n > 0:
        num += str(n%2)
        n = n // 2
    num += (32-len(num)) * "0"
    return int(num,2)


