"""Мы будем использовать одну из самых документированных библиотек Python - Scikit-learn (Sklearn), которая предназначена для машинного обучения"""
import pandas as pd
from sklearn.linear_model import LogisticRegression

df = pd.read_csv('D:\\SoloLearn\\Machine Learning\\titanic.csv')
df['male'] = df['Sex'] == 'male'
X = df[['Fare', 'Age']].values  # 2d numpy array
Y = df['Survived'].values  # 1d numpy array

Model = LogisticRegression()  # Все модели модуля sklearn построены на Python classes (ООП)
Model.fit(X, Y)  # Method for building the model. It takes 2 arg: (x, y), x - 2-ухмерный numpy array, и y(target) - цель как 1-омерный массив
"""
Fitting model means using data to choose a line of best fit. 
To see coefficients we use "model.coef_". And "model.intercept_"
"""

print(Model.coef_, Model.intercept_)
"""
Эти значения: 0.016... , -0.015.. , -0.51... означают, что уравнение выглядит вот так:    
	0 = 0.0161594x + -0.01549065y + -0.51037152
"""
x = df[['Pclass','male','Age','Siblings/Spouses','Parents/Children','Fare']].values
y = df['Survived'].values

model = LogisticRegression()
model.fit(x, y)

print(model.predict( [[3, True, 22.0, 1, 0, 7.25]] )) # Вводим 2-умерный массив, выводим 1-мерный.
# [0]
print(model.predict( x[:5] )) # Это использование метода predict. По каждой из 5 строк, прошёлся по всем параметрам и сделал предсказание.
# [0 1 1 1 0]
print( y[:5] ) # Это мы вывели данные, которые у нас записаны в столбце Survived (Первые пять значений)
# [0 1 1 1 0]

"""
Как мы видим этот метод предсказал всё удачно! Помни, что он возвращает последовательность из 1 и 0, где 1 - выжил, 0 - не выжил.
"""

"""Score the Model"""
# The accuracy score
y_pred = model.predict(x)  # Создание ряда, который состоит из предсказанных значений.
# y == y_pred - Создание ряда, который состоит из логических значений: правильно ли наша модель предсказала каждого из пассажиров.
print( (y == y_pred).sum() )  # 714 значений верны из 887
print( (y == y_pred).sum() / y.shape[0] )  # ~80%-ая точность
# 0.8049605411499436
print(model.score(x, y))  # Метод оценки, используется чтобы сделать прогноз для x и подсчитать, какой % из них соответствует y
# 0.8049605411499436