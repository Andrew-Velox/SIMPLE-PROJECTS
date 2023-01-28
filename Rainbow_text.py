

import time
import sys
import random


B="\033[1;34m"    # Blue
O="\033[0m"       # Text Reset
P="\033[1;35m"    # Purple
R="\033[1;31m"    # Red
G="\033[1;32m"    # Green
Y="\033[1;33m"    # Yellow
C="\033[1;36m"    # Cyan  
Bl="\033[1;30m"   #Black

#pk = random.choice([B,P,R,G,Y,C])

gg = [O,B,P,R,G,Y,C,Bl]


txt = "Hello Guys Whats Up?"


#print(pk,txt)


while True:
	
	for x in range(1,len(txt)+1):
		print(str(gg[x%len(gg)]) + txt[:x])
		time.sleep(0.03)
		
	for y in range(1,len(txt)+1):
		print(str(gg[y%len(gg)]) + txt[:-y])
		time.sleep(0.03)
		
