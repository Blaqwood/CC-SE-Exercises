# Variables below
country_area = int()
population = int()
country_name = str()
pop_density = int()
restart_program = str("Y")

def country():
    country_area = input("What is the area of the country? ")
    population = input("How many people live there? ")
    country_name = input("What is the name of this country? ")
    pop_density = (population / country_area)
    country_summ = ("""
    Country area: {c1}
    Country population: {c2}
    Country name: {c3}
    Population density: {c4}
    """).format(c1 = country_area, c2 = population, c3 = country_name, c4 = pop_density)
    print(country_summ)

while restart_program == ("Y") or restart_program == ("y") or restart_program == (""):
    country()
    restart_program = input(str("Do you want to restart the program? (Y/n)"))