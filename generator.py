from random import randint


def values_generator(set_quantity: int, min_value: int = 0, max_value: int = 100000000,
                     min_elements_amount: int = 100, max_elements_amount: int = 1000000):
    """Function to generate values for tests"""
    for _ in range(set_quantity):
        elements_quantity = randint(min_elements_amount, max_elements_amount)
        with open("input.txt", "a") as inp:
            for i in range(elements_quantity):
                value = randint(min_value, max_value)
                inp.write(str(value) + " ")
            inp.write("\n")


if __name__ == '__main__':
    help_message = """"""
    set_quantity = int(input("Сколько наборов будем генерировать?/How much set quantities we will generate?"))
    values_generator(set_quantity)
