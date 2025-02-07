
'''1111
age = int(input('enter your age '))
if ( age >= 7 ) :
    print('you can studying ')
else :
    print (' you can\'t study ')
   '''
   
mylist = [76,15,12,45,7,5]
for i in mylist :
            if i % 3 == 0 :
                print ( i,' div three ')
            if  i % 5 == 0 :
                print (i ,' div five ')
         
            if ( i % 5 == 0) and (i % 3 == 0):
                print (i, ' div both ')
                
            if ( i % 5 != 0) and (i % 3 != 0):
                print (i, ' not div both ') 
print (mylist)                    
mylist.extend('ali') 
print (mylist) 
mylist.pop(1) 
print (mylist)
print (len(mylist))           
            
            
            
            
            