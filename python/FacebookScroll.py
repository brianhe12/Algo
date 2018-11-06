import webbrowser as wb 

#input "See Older Messages"
input = ""

#Lengths of each index
index1 = len("last_message_timestamp=")	#23
index2 = len("&pagination_direction")	#21

Field1 = (input.find("last_message_timestamp=")) #87
Field2 = (input.find("&pagination_direction")) #123


#88 - 122 is the number we want to change
#Put string 88 - 122 inside a string
TimeStamp = Field1 + index1 #1541525543163

newInput = ""
i = 0
while(input[TimeStamp] != "&"):
	newInput[i] = input[TimeStamp]
	i += 1
	TimeStamp += 1

print(newInput)


#newInput = ""
#i = 0
#while(index1 != "&"):
#	newInput[i] = index1
#	index1+= 1
#	i += 1

#print(newInput)

#input = input.replace("1541525543163","22222222")
#print (input)
#while(i != Field1)


#wb.open(input, new = 2)