import string
text = input("Text: ")

l = 0
w = 1
s = 0
n = len(text)

for i in range(n):
    if text[i].isalpha():
        l += 1

for i in range(n):
    if text[i] == ' ':
        w += 1

for i in range(n):
    if text[i] in ['.', '!', '?']:
        s += 1

letters = l
words = w
sentences = s

L = 100 * (letters / words)
S = 100 * (sentences / words)
index = round(0.0588 * L - 0.296 * S - 15.8)

if index > 16:
    print("Grade 16+")
elif index <= 1:
    print("Before Grade 1")
else:
    print(f"Grade {index}")
