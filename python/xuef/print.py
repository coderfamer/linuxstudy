#!/usr/bin/env python
# -*- coding: utf-8 -*-
' a test module'

__author__ = 'chenzq'

class Student(object):
    def __init__(self, name, score):
        self.__name = name
        self.score = score

    def print_score(self):
        print('%s: %s' % (self.__name, self.score))

bart = Student('Tom', 59)
lisa = Student('Lisa', 99)


