import numpy as np

from utils import Point

print(f"NumPy: {np.__version__}")

x = np.random.rand(2, 3).astype(np.float32)
print(x)

x = np.random.rand(2, 3).astype(np.int32)
print(x)

p1 = Point(10, 10)
p2 = Point(2, 4)
print(f"Points:\n{p1}\n{p2}")
print(f"Distance:\n{p1.dist(p2)}")
