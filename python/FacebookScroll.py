import webbrowser as wb 

#input "See Older Messages"
inputString = input("Enter facebook messages URL (ex. https://mobile.facebook.com/messages/read/?tid=cid.c.10000151...): ")
print("\n")

#Lengths of each index
index1 = len("last_message_timestamp=")	#23
index2 = len("&pagination_direction")	#21
inputlen = len(inputString)

Field1 = (inputString.find("last_message_timestamp=")) #87
Field2 = (inputString.find("&pagination_direction")) #123
Field1 = Field1 + index1 #110

newString = int(inputString[Field1:-(inputlen - Field2)])

#Time Traveling!!
months = input("Please enter the number of months you want to scroll back (Will show an error if the months entered is further than your first sent message): ")
TimeTravel = (((2.628 * 10**9) * float(months)))

#String casting
FinalString = str(newString - TimeTravel)
newString = str(newString)

inputString = inputString.replace(newString,FinalString)

wb.open(inputString, new = 2)

