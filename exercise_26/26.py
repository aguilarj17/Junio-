from sys import argv
#Preguntamos some information
print("How old are you?", end=' ')
age = input()
print("How tall are you?", end=' ')
height = input()
print("How much do you weigh?", end=' ')
weight = input()

print(f"So, you're {age} old, {height} tall and {weight} heavy.")

script =argv
file_again = argv
print("Script:", script)
print("filename:", file_again)

filename = argv
print("filename:", file_again)
txt = open(file_again)

print("Here's your file {file_again}:")
print(txt.read())

print("Type the filename again:")
file_again = input("> ")

txt_again = open(file_again)

print(txt_again.read())

print('Let\'s practice everything.')
print('You\'d need to know \'bout escapes with \\ that do \n newlines and \t tabs.')

poem = """
\tThe lovely world
with logic so firmly planted
cannot discern \n the needs of love
nor comprehend passion from intuition
and requires an explanation
\n\t\twhere there is none.
"""

print("--------------")
print(poem)
print("--------------")

five = 10 - 2 + 3
print(f"This should be five: {five}")


def secret_formula(started):
    jelly_beans = started * 500
    jelly = jelly_beans / 1000
    create = jelly / 100
    return jelly_beans, jelly, create


start_point = 10000
beans, jars, crates = secret_formula(start_point)

# Esta es otra manera de formatear una cadena
print("With a starting point of: {}".format(start_point))
# Es como con un string f""
print(f"We'd have {beans} beans, {jars} jars, and {crates} crates.")

start_point = start_point / 10

print("We can also do that this way:")
formula = secret_formula(start_point)
#aplicamos esto como lista de cadena de un formato
print("We'd have {} beans, {} jars, and {} crates.".format(*formula))

people = 20
cats = 30
dogs = 15

if people < cats:
    print("Too many cats! The world is doomed!")

if people < cats:
    print("Not many cats! The world is saved!")

if people < dogs:
    print("The world is drooled on!")

if people > dogs:
    print("The world is dry!")

dogs += 5

if people >= dogs:
    print("People are greater than or equal to dogs.")

if people <= dogs:
    print("People are less than or equal to dogs.")

if people == dogs:
    print("People are dogs.")
