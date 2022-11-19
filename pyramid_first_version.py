# Prompt user for height value
height = 0
while height < 1:
    height = int(input("Height: "))

# Loop height times
for i in range(height):
    
    # Substract 1 space (# minimum place) and i (for each iteration)
    space = print((height - 1 - i) * " ", end="")
    
    # Add 1 hash for each iteration
    hashh = print((i + 1) * "#", end = "")
    
    hashhh = print((i) * "#")
