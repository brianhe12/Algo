#If  is odd, print Weird
#If  is even and in the inclusive range of  to 2,5 print Not Weird
#If  is even and in the inclusive range of  to 6,20 print Weird
#If  is even and greater than 20, print Not Weird

n = int(raw_input())
isEven = n % 2;

if (isEven != 0):
    print("Weird")
elif (isEven == 0) and (n >= 2) and (n <= 5):
    print("Not Weird")
    
elif (isEven == 0) and (n >= 6) and (n <= 20):
    print("Weird")
else:
    print("Not Weird")