import pandas as pd
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import accuracy_score, precision_score, recall_score, f1_score
from sklearn.model_selection import train_test_split
import numpy as np

df = pd.read_csv('D:\\SoloLearn\\Machine Learning\\titanic.csv')
df['male'] = df['Sex'] == 'male'
x = df[['Pclass', 'male', 'Age', 'Siblings/Spouses', 'Parents/Children', 'Fare']].values
y = df['Survived'].values

x_train, x_test, y_train, y_test = train_test_split(x, y)

# building the model
model = LogisticRegression()
model.fit(x_train, y_train)

# evaluating the model
y_pred = model.predict(x_test)
print(" accuracy: {0:.5f}".format(accuracy_score(y_test, y_pred)))
print("precision: {0:.5f}".format(precision_score(y_test, y_pred)))
print("   recall: {0:.5f}".format(recall_score(y_test, y_pred)))
print(" f1 score: {0:.5f}".format(f1_score(y_test, y_pred)))

# Вместо того, чтобы выполнять 1 разделение на обучение и тест, мы разделим наши данные на обучающий и тестовый наборы несколько раз.
"""
Multiple Training and Test Set:
	Надо понять как наша модель работает с данными не только на одном примере, а в целом.
	Допустим у нас есть dataset на 200 datapoints. Мы сделаем 5 chunk - разделений, у которых процент test / set по  соотношению к training / set будет одинаков, но данные будут взяты из разных мест.

	Chunk												Accuracy
		1. Train  | Train  | Train  | Train  | [TEST]	  0.83
		2. Train  | Train  | Train  | [TEST] | Train 	  0.79
		3. Train  | Train  | [TEST] | Train  | Train 	  0.78
		4. Train  | [TEST] | Train  | Train  | Train 	  0.80
		5. [TEST] | Train  | Train  | Train  | Train 	  0.75
	
	Mean = (0.83 + 0.79 + 0.78 + 0.80 + 0.75) / 5 = 0.79
	
	Процесс создания нескольких наборов для обучения и тестов называется перекрёстной проверкой в k-кратном размере 
	(k-fold cross validation)
	K - кол-во фрагментов, на которые мы разбиваем наш набор данных. Число по умолч - 5.
	Цель cross validation - получить точные данные о показателях (accuracy, precision, recall)
	
	Так как эти модели были построены для оценки, нам не нужна одна из этих конкретно, нам нужна самая совершенная.
	Поэтому после отслеживания оценочных показателей, строим модель, используя все данные.
	
	Если набор данных слишком большой, мы проводим train_test_split.
"""