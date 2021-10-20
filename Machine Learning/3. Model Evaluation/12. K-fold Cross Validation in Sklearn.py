import pandas as pd
from sklearn.model_selection import KFold
from utils import decor

df = pd.read_csv('D:\\SoloLearn\\Machine Learning\\titanic.csv')
x = df[['Age', 'Fare']].values[:6]
y = df['Survived'].values[:6]

kf = KFold(n_splits=3, shuffle=True)  # n_splits - кол-во создаваемых блоков, shuffle - следует ли рандомизировать порядок
for train, test in kf.split(x):
	print(f'Training set: {train}', f'Test set: {test}')
decor()

"""
Метод split возвращает генератор, поэтому мы используем Ф списка, чтобы превратить его в список.
"""

splits = list(kf.split(x))
first_split = splits[0]
print(f'Splits[0] = {first_split}')  # 1-ый массив - индексы для обучающего набора, 2-ой - для тестового.
decor()

train_indices, test_indices = first_split
print(f'First split:\nTraining set indices: {train_indices}')
print(f'Test set indices: {test_indices}')
decor()

# print(splits) - 6 элементов

x_train = x[train_indices]
x_test = x[test_indices]
y_train = y[train_indices]
y_test = y[test_indices]

print(f'x_train:\n{x_train}\n')  # 4 точки данных
print(f'y_train:\n{y_train}\n')  # Целевые значения точек из x_train
print(f'x_test:\n{x_test}\n')  # 2 оставшиеся точки
print(f'y_test:\n{y_test}\n')  # Их целевые значения

"""
На данный момент у нас есть обучающие и тестовые наборы в том же формате, что и при импользовании Ф train_test_split
"""