'''
	Этот раздел будет посвящён тому, как помещать значения, полученные с помощью Pandas в NumPy arrays.
	Сама билиотека Pandas была построена на NumPy.
'''
import pandas as pd
from utils import decor

df = pd.read_csv('D:\\SoloLearn\\Machine Learning\\titanic.csv')
print(df['Fare'].values)  # Даёт одномерный массив, являющийся numpy array
decor()

arr = df[['Pclass','Fare','Age']].values  # Двухмерный массив, содержащий значения Pclass, Fare и Age каждого пассажира в отдельном списке.
print(arr)
decor()

print(arr.shape) # (887, 3)
decor()

print(df.shape) # Весь DataFrame
decor()

"""
	Selecting from a numpy array.
"""

print(arr[0])  # Значения первого пассажира
# Массив, состоящий из 3 значений в первой строчке значений arr(индекс первой строки - 0): Pclass = 3, Fare = 7.25, Age =  22
decor()

print(arr[0, 1]) # Значение Fare с индексом 1 из массива с индексом 0		# 7.25
decor()

print(arr[:,2]) # Массив, содержащий все значения столбца с индексом 2 в arr - Age
# Массив всех возврастов
decor()

"""
	Masking
"""

mask = arr[:,2] < 18
print(mask) # array with boolean values
decor()

print(arr[mask]) # Массив массивов несовершеннолетних пссажиров.
decor()

"""
	Summing and Counting
"""

print(mask.sum()) # Так как mask это массив с логическими значениями, где True = 1, а False = 0, то mask.sum() - тоже самое, что и len(arr[mask]),
# то есть показывает количество несовершеннолетних. 130 True, 757 False.
decor()

print( (arr[:, 2] < 18).sum() ) # Тоже самое, что и выше
