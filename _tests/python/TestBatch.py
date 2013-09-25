from unittest import *
from sorting import AdaptiveSortTest

if __name__ == "__main__":

    loader = TestLoader()
    suite = TestSuite((
        loader.loadTestsFromTestCase(AdaptiveSortTest),
        ))

    runner = TextTestRunner(verbosity = 2)
    runner.run(suite)
