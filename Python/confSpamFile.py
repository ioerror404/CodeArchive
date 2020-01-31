fr = open('C:\\Users\\Mughis Mirza\\Downloads\\mb.txt')
fw = open('C:\\Users\\Mughis Mirza\\Downloads\\spam.txt','w')
sp = 0
count = 0
for line in fr :
	if line.find('X-DSPAM-Confidence: ') != -1:
		fw.write(line)
fw.close()		
f = open('C:\\Users\\Mughis Mirza\\Downloads\\spam.txt')
for line in f :
	if line.find(': ') != -1 :
		index = line.find(': ')
		line = line[index + 1:]
		spm = float(line)
		sp = spm + sp
		count = count + 1
asp = sp/count
print("Avg spam confidence :",asp)
if asp < 1 :
	print('Fucker is innocent.')
if asp > 1 :
	print("Grab this cunt ")
