def countDigits(n: int) -> int:
    current = n 
    rem = 0
    count = 0
    while(current > 0):
        rem = current % 10
        if rem!=0 and n % rem == 0 :
            count+=1
        current = current // 10
    return count
