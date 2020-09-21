import matplotlib.pyplot as plt
import numpy as np
import string

def main():
    a, b, c, d = (0, 1, 0), (1, 0, 1), (0, -1, 2), (-1, 0, 3)
    A = np.array([a, b, c, d])

    I = np.eye(3)
    color_lut = 'rgbc'
    fig = plt.figure()
    ax = plt.gca()
    xs = []
    ys = []
    for row in A:
        output_row = I @ row
        x, y, i = output_row
        xs.append(x)
        ys.append(y)
        i = int(i)
        c = color_lut[i]
        plt.scatter(x, y, color=c)
        plt.text(x + 0.15, y, string.ascii_letters[i])
    xs.append(xs[0])
    ys.append(ys[0])
    plt.plot(xs, ys, color="gray", linestyle='dotted')
    ax.set_xticks(np.arange(-2.5, 3, 0.5))
    ax.set_yticks(np.arange(-2.5, 3, 0.5))
    plt.grid()
    plt.show()

if __name__ == "__main__":
    main()
