__author__ = 'Yuriy Shapovalov (shapovalov.yuri@gmail.com)'

from AaDS.sorting import BubbleSort
from data import DataProvider
import os.path
import unittest

class BubbleSortTest(unittest.TestCase):

    _data = []
    _file = os.path.dirname(__file__) + '/../../_data/rand10_positive_norepear.data'

    def setUp(self):
        print(os.pardir)

        with open(self._file, 'r') as f:
            seq = f.read()
            _data = seq.split(sep=' ')
        print(_data)

    def test_BubbleSortStub(self):
        self.assertTrue(True)

if __name__ == "__main__":
    unittest.main()
