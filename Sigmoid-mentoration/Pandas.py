import numpy as np
import pandas as pd

list_data = [np.random.random() for _ in range(200)]
series = pd.Series(list_data)

for element in series:
	print(element)

min_value = series.min()
max_value = series.max()
print('\n', min_value)
print('\n', max_value)