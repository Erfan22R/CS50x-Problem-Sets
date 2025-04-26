from cs50 import get_float

while True:
    temp = get_float("Change owed: ")
    if temp > 0:
        break
    else:
        continue

coins = 0
cents = (temp * 100)

while cents > 0:
    if cents >= 25:
        cents -= 25
    elif cents >= 10:
        cents -= 10
    elif cents >= 5:
        cents -= 5
    else:
        cents -= 1

    coins += 1

print(coins)
