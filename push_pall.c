stack = []
## Prints 20, 10 (top to bottom) on separate lines
def push(line_number, arg):
    if len(arg) != 1:
        print(f"L{line_number}: usage: push <integer>")
        exit(1)
    try:
        value = int(arg[0])
        stack.append(value)
    except ValueError:
        print(f"L{line_number}: usage: push <integer>")
        exit(1)
def pall():
    for value in reversed(stack):
        print(value)

push(1, ["10"])  # Pushes 10 onto the stack
push(2, ["20"])  # Pushes 20 onto the stack
pall()          

