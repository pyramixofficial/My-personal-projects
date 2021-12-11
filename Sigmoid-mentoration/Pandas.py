import numpy as np
import pandas as pd

list_data = [np.random.random() for _ in range(200)]
series = pd.Series(list_data)

for element in series:
	print(element)


#Computing the minimal value of a series
min_value = series.min()
print('\n', 'Minim value: ', min_value)

#Computing the maximal value of a series
max_value = series.max()
print('\n', 'Maximum value: ', max_value)

#Computing the mean value of a series
mean = series.mean()
print('\n', 'Mean value: ',mean)

#Computing the median value of a series
median = series.median()
print('\n', 'Median value: ', median)

#Computing the mode value of a series
mode = series.mode()
print('\n', 'Mode value: ', mode)

#Finding the index of the minimal value of series
min_index = series.argmin()
print('\n', 'Index of minimal value: ', min_index)

#Finding the index of the maximal value of series
min_index = series.argmax()
print('\n', 'Index of maximal value: ', max_index)