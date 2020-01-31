import string
counts = dict()
name = input('Enter file name : ')
if name == 'r' :
	f = open('C:\\Users\\Mughis Mirza\\Downloads\\romeo.txt')
for line in f :
	line = line.translate(str.maketrans('','',string.punctuation))
	line = line.lower()
	words = line.split()
	#counting all the words by making a dictionary histogram
	for word in words :
		if word not in counts :  
			counts[word] = 1
		else :
			counts[word] += 1
#sorts the list of tuples returned by items method into desc. order w.r.t values
lst = list()
for key,val in list(counts.items()) :
	lst.append((val,key))
lst.sort(reverse = True)
#printing 1st 10 values in list i.e. also the most repeated ones	
for key, val in lst[:10] :
	print(key, val)
