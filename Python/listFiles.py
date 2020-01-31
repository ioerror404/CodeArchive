f = open('C:\\Users\\Mughis Mirza\\Downloads\\mbs.txt')
count = 0
for line in f :
	words = line.split()
	if len(words) == 0  : continue
	if words[0] != 'From' : continue
	count = count + 1
	print(words[1])
print('There are',count,'lines starting with FROM.')	