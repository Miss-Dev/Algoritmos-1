import os 
def menu():    
    print('\nMenu')
    print('1 - Converter de binário para decimal')
    print('2 - Converter de decimal para hexadecimal') 
    print('3 - Converter de decimal para binário')
    print('4 - Mostrar tabela com as conversões') 
    print('5 - Sair') 
    op = int(input())
    os.system('clear')
    return op
#Essa função recebe uma string com o número em binário e devolve o decimal
#equivalente
def calculadora(n1, n2, op):
    if op == 1:
        return n1+n2
    elif op == 2:
        return n1-n2
    elif op == 3:
        return n1*n2
    elif op == 4:
        return n1/n2
    else:
        return False

def binarioDec(n):
    n = list(n)    
    if len(n)==1:
        return int(n[0])
    else:       
        return binarioDec(n[1:])+(int(n[0])==1)*2**(len(n)-1)

def hexDecimal(n):
  return '{0:x}'.format(n)    
    
def ConvertePbinario(n): 
 if n==0:
   return ''
 else:
   return ConvertePbinario(n//2) + str(n%2)
#Essa função verifica se o numero digitado é um binário, caso não seja retorna 0
def Verifica(n):
  c = 1
  for i in range(len(n)):
    if int(n[i])<0 or int(n[i])>1:
      c = 0
      break
  return c
  
print('#'*4+'Calculadora de bits!'+'#'*4)
cols = 3
lin = 4

op = menu()
while op!=5:
  if op == 1:
    a = input('Informe um número em binário!\n')
    if Verifica(a) == 0:
      print('Não é um número em binário!')
    else:
      b = binarioDec(a)
      print('{} = {}(10)'.format(a,b))
  elif op == 2:
    n = int(input('Informe um numero em decimal\n'))
    print(n, '=',hexDecimal(n))
  elif op == 3:
    n = int(input('Informe um número em decimal\n'))
    print(n,'=',ConvertePbinario(n))
  elif op == 4:
    n = input('Informe um número em binário!\n')
    if Verifica(n) == 0:
      print('Não é um número em binário!')
    else:
      decm = binarioDec(n)
      hexm = hexDecimal(decm)
      hexm = hexm.upper()
      tam = len(n)
      print('-'*40)
      print('Binário  ',' Decimal   ', 'Hexadecimal  ')  
      print('-'*tam,' ---------','  ----------')
      print('{}      {}       {}'.format(n,decm,hexm)) 
      print('-'*40)  
  else:
    print('Opção inválida!')    

  op = menu()   

print('\n\n'+'#'*8+'Fim!'+'#'*8)
