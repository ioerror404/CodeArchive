f = open('C:\\Users\\Mughis Mirza\\Downloads\\mb.txt')
count = 0
for line in f :
	line = line.rstrip()
	if line.find('@uct.ac.za') == -1:
		continue
	print(line)	