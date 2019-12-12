#!/usr/bin/env python3

import sys
import unittest

class TestCases(unittest.TestCase):

  def test_simple(self):
    import fancymodule.fancymodule as fancy
    i = fancy.fancy_increment(1)
    self.assertTrue(i >= 1)



  
if __name__=='__main__':
  unittest.main()
