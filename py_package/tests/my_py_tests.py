import pytest

from py_package.utils import Point


def test_basic():
    p1 = Point(10, 10)
    p2 = Point(2, 4)
    assert p1.dist(p2) == 10
