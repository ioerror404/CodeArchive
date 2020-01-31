f = open('C:\\Users\\Mughis Mirza\\Downloads\\mb.txt')
count = 0
for line in f :
	if line.startswith('From: ian'): 
		line = line.rstrip()
		count = count + 1
		print(count,line)
