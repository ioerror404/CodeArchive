import math

def add(operrand1, operrand2) :
    print('ADDITION :',operrand1 + operrand2)
def sub(operrand1, operrand2) :
    print('SUBTRACTION :',operrand1 - operrand2)
def mul(operrand1, operrand2) :
    print('MULTIPLICATION :',operrand1 * operrand2)
def div(operrand1, operrand2) :
    print('DIVISION :',operrand1 / operrand2)
def exp(operrand1, operrand2) :
    print('EXPONANTIATION :',operrand1 ** operrand2)
def Sqrt(operrand1, operrand2) :
    sqrt1 = math.sqrt(operrand1)
    sqrt2 = math.sqrt(operrand2)
    print('SQ of op1 :',sqrt1)
    print('SQ of op2 :',sqrt2)
def Sin(operrand1, operrand2) :
    sin1 = math.sin(operrand1)
    sin2 = math.sin(operrand2)
    print('sin of op1 :',sin1)
    print('sin of op2 :',sin2)
def LOG(operrand1, operrand2) :
    log1 = math.log10(operrand1)
    log2 = math.log10(operrand2)
    print('log of op1 :',log1)
    print('log of op2 :',log2)

inp1 = input('Enter operrand1 : ')
inp2 = input('Enter operrand2 : ')
op1 = float(inp1)
op2 = float(inp2)
add(op1, op2)
sub(op1, op2)
mul(op1, op2)
div(op1, op2)
exp(op1, op2)
Sqrt(op1, op2)
Sin(op1, op2)
LOG(op1, op2)
