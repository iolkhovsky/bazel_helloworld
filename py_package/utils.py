import numpy as np


class Point:

    def __init__(self, x, y):
        self.x = x
        self.y = y

    @staticmethod
    def _distance(x1, y1, x2, y2):
        return np.sqrt((x1 - x2) ** 2 + (y1 - y2) ** 2)

    def dist_to_origin(self):
        return self._distance(self.x, self.y, 0, 0)

    def dist(self, other):
        return self._distance(self.x, self.y, other.x, other.y)

    def __str__(self) -> str:
        return f"Point<{self.x}, {self.y}>"
  