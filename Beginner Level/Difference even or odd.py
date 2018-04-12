num1,num2=raw_input().split(" ")
num1=int(num1)
num2=int(num2)
Difference=num1-num2
check=Difference%2
if(check==0):
  print("even")
else:
  print("odd")
