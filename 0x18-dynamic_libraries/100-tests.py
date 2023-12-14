# 100-tests.py
from ctypes import CDLL

lib = CDLL("./liball.so")

def add(a, b):
    return lib.add(a, b)

def subtract(a, b):
    return lib.subtract(a, b)

def multiply(a, b):
    return lib.multiply(a, b)

def divide(a, b):
    return lib.divide(a, b)

print(add(5, 3))
print(subtract(10, 4))
print(multiply(7, 2))
print(divide(20, 5))
