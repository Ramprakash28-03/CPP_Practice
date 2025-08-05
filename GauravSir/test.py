# Base class
class Animal:
    def eat(self):
        print("This animal eats.")

# Derived class 1
class Dog(Animal):
    def bark(self):
        print("The dog barks.")

# Derived class 2
class Cat(Animal):
    def meow(self):
        print("The cat meows.")

# Creating objects
dog = Dog()
cat = Cat()

dog.eat()  # From the base class
dog.bark() # Unique to Dog class

cat.eat()  # From the base class
cat.meow() # Unique to Cat class
