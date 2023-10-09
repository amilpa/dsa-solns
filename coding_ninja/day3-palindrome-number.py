n=int(input())  
# taking n as a input 
## write your code !!

num = n
rev = 0
while num>0:
  if num%10 !=0:
    rev = rev*10 + num % 10
  else:
    rev = rev*10
  num = num//10

if rev == n:
  print("true")
else:
  print("false")