__author__ = 'Yuriy Shapovalov (shapovalov.yuri@gmail.com)'

import unittest
#from sorting import BubbleSort

class BubbleSortTest(unittest.TestCase):

    _data = []

    def setUp(self):
        with open('../../../_data/rand10_positive_norepear.data', 'r') as f:
            seq = f.read()
            _data = seq.split(sep=' ')
        print(_data)

    def test_BubbleSortStub(self):
        self.assertTrue(True)

if __name__ == "__main__":
    unittest.main()
