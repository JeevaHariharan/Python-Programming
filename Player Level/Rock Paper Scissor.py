data,data1=raw_input().split()
if(data=="R" and data1=="P"):
  print("P")
elif(data=="P" and data1=="R"):
  print("P")
elif(data=="P" and data1=="S"):
  print("S")
elif(data=="S" and data1=="P"):
  print("S")
elif(data=="R" and data1=="S"):
  print("R")
elif(data=="S" and data1=="R"):
  print("R")
else:
  print("D")
