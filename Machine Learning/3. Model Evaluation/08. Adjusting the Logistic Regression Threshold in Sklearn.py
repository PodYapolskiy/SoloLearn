import pandas as pd
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split
from sklearn.metrics import precision_score, recall_score
from utils import decor

df = pd.read_csv('D:\\SoloLearn\\Machine Learning\\titanic.csv')
df['male'] = df['Sex'] == 'male'
x = df[['Pclass', 'male', 'Age', 'Siblings/Spouses', 'Parents/Children', 'Fare']].values
y = df['Survived'].values

x_train, x_test, y_train, y_test = train_test_split(x, y)

model = LogisticRegression()
model.fit(x_train, y_train)

# Возаращает массив массивов, в каждом из которых лежат 2 значения.
# [0.76453532 0.23546468]
# Первое значение - несоответсвие признаку (не выжил), второе соответсвенно соответсвие (выжил)
print(f"Predict proba:\n{model.predict_proba(x_test)[:5]}")  # всего 222 в Test set
decor()

# Берём второе значение сооттветвующуе вероятности выжить
y_pred = model.predict_proba(x_test)[:, 1] > 0.75

print(f'Precision: {precision_score(y_test, y_pred)}')
print(f'Recall: {recall_score(y_test, y_pred)}')

"""
Threshold = 0.5 - это обычная logistic regression model. Другие значения будут давать альтернативную модель.
"""