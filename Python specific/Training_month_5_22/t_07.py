# Homotopic deformation

import matplotlib.pyplot as plt
import math as m


def h_1(t, s):
    real = (1-s)*m.cos(2*m.pi*t) + 3*s*(1)
    imaginary = (1-s)*m.sin(2*m.pi*t) + 3*s*(8*t)
    h = complex(real, imaginary)
    return h


def h_2(t, s):
    real = (1-s)*m.cos(2*m.pi*t) + 3*s*(2-8*t)
    imaginary = (1-s)*m.sin(2*m.pi*t) + 3*s*(1)
    h = complex(real, imaginary)
    return h


def h_3(t, s):
    real = (1-s)*m.cos(2*m.pi*t) + 3*s*(-1)
    imaginary = (1-s)*m.sin(2*m.pi*t) + 3*s*(4 - 8*t)
    h = complex(real, imaginary)
    return h


def h_4(t, s):
    real = (1-s)*m.cos(2*m.pi*t) + 3*s*(8*t - 6)
    imaginary = (1-s)*m.sin(2*m.pi*t) + 3*s*(-1)
    h = complex(real, imaginary)
    return h


def h_5(t, s):
    real = (1-s)*m.cos(2*m.pi*t) + 3*s*(1)
    imaginary = (1-s)*m.sin(2*m.pi*t) + 3*s*(8*t - 8)
    h = complex(real, imaginary)
    return h


s = 0

for j in range(0, 11):
    h_real = []
    h_imaginary = []
    for k in range(0, 100 + 1):
        h_value = h_1(k / (100 * 8), s)
        h_real.append(h_value.real)
        h_imaginary.append(h_value.imag)

    for k in range(0, 100 + 1):
        h_value = h_2(k / (100 * 8) + 1/8, s)
        h_real.append(h_value.real)
        h_imaginary.append(h_value.imag)

    for k in range(0, 100 + 1):
        h_value = h_3(k / (100 * 8) + 3/8, s)
        h_real.append(h_value.real)
        h_imaginary.append(h_value.imag)

    for k in range(0, 100 + 1):
        h_value = h_4(k / (100 * 8) + 5/8, s)
        h_real.append(h_value.real)
        h_imaginary.append(h_value.imag)

    for k in range(0, 100 + 1):
        h_value = h_5(k / (100 * 8) + 7/8, s)
        h_real.append(h_value.real)
        h_imaginary.append(h_value.imag)


    plt.plot(h_real,h_imaginary)
    plt.show()

    s += .1

# Well, it isn't pretty, but it works <3
# Python be teaching me grammar
