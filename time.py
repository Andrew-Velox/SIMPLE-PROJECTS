import os
import sys
import time
from datetime import datetime

#os.system("clear")

date = datetime.now()
dt = date.strftime("\033[1;30;47m  %d-%m-%y   \033[1;00;00m")
print(dt)
print(13*"-")

while True:
	rr = datetime.now()
	tt = rr.strftime("%H")

	if int(tt) > int(12):
		do = int(tt)-12
		dd = rr.strftime(":%M:%S")
		tm = (f"{do}"+f"{dd}")
		sys.stdout.write(f"\r\033[1;30;47m {tm} PM \033[1;00;0m")
		sys.stdout.flush()
		time.sleep(0.03)
	else:
		xx = rr.strftime("\r\033[1;30;47m %H:%M:%S AM \033[1;00;0m")
		sys.stdout.write(xx)
		sys.stdout.flush()
		time.sleep(0.03)
