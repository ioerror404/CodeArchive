import math

def minimax(curDepth, nodeIndex, maxTurn, scores, targetDepth):
    if (curDepth == targetDepth):         
        return scores[nodeIndex]  
    if (maxTurn):         
        return max(minimax(curDepth + 1, nodeIndex * 2, False, scores, targetDepth), minimax(curDepth + 1, nodeIndex * 2 + 1, False, scores, targetDepth))  
    else:         
        return min(minimax(curDepth + 1, nodeIndex * 2, True, scores, targetDepth), minimax(curDepth + 1, nodeIndex * 2 + 1, True, scores, targetDepth))    

scores=[] 
length=int(input("Length-> "))

for i in range(length):     
    inp=int(input('Value-> '))     
    scores.append(inp)  

treeDepth = math.log(len(scores), 2)  
print("The optimal value is : ") 
print(minimax(0, 0, True, scores, treeDepth)) 