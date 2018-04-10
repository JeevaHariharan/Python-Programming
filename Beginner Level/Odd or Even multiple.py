a,b=raw_input().split(" ")
a=int(a)
b=int(b)
c=a*b
c=c%2
if(c==0):
  print("even")
else:
  print("odd")
