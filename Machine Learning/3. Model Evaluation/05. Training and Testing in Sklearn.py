import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LogisticRegression
from sklearn.metrics import accuracy_score, precision_score, recall_score, f1_score
# train_test_split случайным образом поместит каждую точку в один из наборов. По умолчанию training - 75%, test - 25%
from utils import decor

df = pd.read_csv('D:\\SoloLearn\\Machine Learning\\titanic.csv')
df['male'] = df['Sex'] == 'male'
X = df[['Pclass', 'male', 'Age', 'Siblings/Spouses', 'Parents/Children', 'Fare']].values
Y = df['Survived'].values

X_train, X_test, Y_train, Y_test = train_test_split(X, Y)

print(f'Whole dataset: {X.shape} {Y.shape}')  # Весь датасет
print(f'Training Set: {X_train.shape} {Y_train.shape}')  # 665 находится в обучающем наборе
print(f'Test Set: {X_test.shape} {Y_test.shape}')  # 222 в тестовом
# До сих пор остаются все 6 свойств в каждом Set'e
decor()

"""
С помощью параметра train_size можно изменить размер обучающего набора.
Например:
	train_test_split(X, Y, train_size = 0.6) - этопоместит 60% данных в training и 40% в test.
"""

Model = LogisticRegression()
Model.fit(X_train, Y_train)

Y_pred = Model.predict(X_test)

print(f'Оценка модели: {Model.score(X_test, Y_test)}')
decor()

# All metrics
print(f'Accuracy: {accuracy_score(Y_test, Y_pred)}')
print(f'Precision: {precision_score(Y_test, Y_pred)}')
print(f'Recall: {recall_score(Y_test, Y_pred)}')
print(f'F1 Score: {f1_score(Y_test, Y_pred)}')
decor()
# Это нормально получать значения несколько отличные от предыдущего раза. Это происходит из-за того, что
# train_test_split() выполняется случайно. В зависимости от того, какие баллы попадают в эти сеты, баллы будут разными.


"""Using a Random State (Использование случайного состояния)"""

x = [[1, 1], [2, 2], [3, 3], [4, 4]]
y = [0, 0, 1, 1]

x_train, x_test, y_train, y_test = train_test_split(x, y, random_state=27)

print(f'x_train: {x_train}')
print(f'y_train: {y_train}\n')

print(f'x_test: {x_test}')
print(f'y_test: {y_test}')

"""
Если мы запустим код выше без random_state = 27, мы каждый раз будем получать разные значения.
Мы просто выбираем произвольное число, и каждый раз происходит одинаковое разбиение.
	
random_state также можно назвать seed. (Как в майнкрафте)
"""