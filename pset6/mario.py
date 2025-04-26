from cs50 import get_int

while True:
    nunber = get_int("Height: ")
    if nunber > 0 and nunber < 9:
        break

for i in range(nunber):
    print(" " * (nunber - (i+1)) + "#" * (i+1))
