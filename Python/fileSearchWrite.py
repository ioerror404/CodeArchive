fr = open('C:\\Users\\Mughis Mirza\\Downloads\\mb.txt')
fw = open('C:\\Users\\Mughis Mirza\\Downloads\\m.txt','w')
count = 0
for line in fr :
	#line = line.rstrip()
	if line.startswith('From stephen') :
		fw.write(line)
