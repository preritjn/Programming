import threading
import time


def functionA():
	print("Function A")


def functionB():
	print("Function B")


def main():
	# creating thread
	t1 = threading.Thread(target=functionA)
	t2 = threading.Thread(target=functionB)

	# starting thread 1
	t1.start()
	# starting thread 2
	t2.start()

	# wait until thread 1 is completely executed
	t1.join()
	# wait until thread 2 is completely executed
	t2.join()

	# both threads completely executed
	print("Done!")

while True:
	main()
	time.sleep(1)