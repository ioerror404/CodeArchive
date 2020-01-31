data = input("Enter the string : ")
s_pos = data.find(' ')
e_pos = data.find(' ', s_pos + 1)
email = data[s_pos + 1: e_pos]
print(email)
