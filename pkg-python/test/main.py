#!/usr/bin/env python3

import sys
import unittest

class TestCases(unittest.TestCase):

  def test_simple(self):
    import fancymodule.fancymodule as fancy
    i = fancy.fancy_increment(1)
    self.assertTrue(i >= 1)

  def test_class(self):
    import fancymodule.fancymodule as fancy
    f = fancy.FancyObject()
    i = f.random_increment(1)
    self.assertTrue(i >= 1)
    f2 = fancy.FancyObject(-2,2)
    i2 = f2.random_increment(0)
    self.assertTrue(i2 >= -2 and i2 <= 2)

  def test_classmembers(self):
    import fancymodule.fancymodule as fancy
    f = fancy.FancyObject()
    i = f.random_increment(1)
    self.assertTrue(i >= 1)
    f.min = -2
    f.max = 2
    i = f.random_increment(0)
    self.assertTrue(i >= -2 and i <= 2)

  def test_container(self):
    import fancymodule.fancymodule as fancy
    numbers = fancy.IntList()
    numbers[:] = [0,1,2,3,4]
    fancy.fancy_increment_container(numbers)
    for i,val in enumerate(numbers):
      self.assertTrue( val>=i+1 and val<=i+10)
  
if __name__=='__main__':
  unittest.main()
