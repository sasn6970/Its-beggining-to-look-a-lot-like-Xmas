height = int(input("Height: ")) # How big should the tree be?

for i in range(height):
    print((height - 1 - i) * " ", ((i + 1) + i) * "#")
