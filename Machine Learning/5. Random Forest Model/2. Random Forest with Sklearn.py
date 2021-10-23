import pandas as pd
from sklearn.datasets import load_breast_cancer
from sklearn.ensemble import RandomForestClassifier
from sklearn.tree import DecisionTreeClassifier
from sklearn.model_selection import train_test_split
from utils import decor

cancer_data = load_breast_cancer()
df = pd.DataFrame(cancer_data['data'], columns=cancer_data['feature_names'])
df['target'] = cancer_data['target']

X = df[cancer_data.feature_names].values
y = df['target'].values

print('Data dimensions:', X.shape)
decor()

X_train, X_test, y_train, y_test = train_test_split(X, y, random_state=101)

rf = RandomForestClassifier(
    n_estimators=15  # Задаём кол-во деревьев
    # Если значение будет 10, точность получиться на пару процентов ниже
)
rf.fit(X_train, y_train)

first_row = X_test[0]  # Проверяем первый случай
print("Prediction:", rf.predict([first_row]))
print("True value:", y_test[0])  # Видим, что предсказание оказалось правильным
decor()

print("Random Forest accuracy:", rf.score(X_test, y_test))

dt = DecisionTreeClassifier()
dt.fit(X_train, y_train)

print("Decision Tree accuracy:", dt.score(X_test, y_test))
"""
Случайный лес дал результат на 7% точнее, чем одно дерево решений.
"""

