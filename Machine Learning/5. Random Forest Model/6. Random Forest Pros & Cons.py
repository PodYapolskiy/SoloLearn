"""
Преимущества и недостатки случайного леса:
    + Справляется с неподготовленными данными в любой ситуации в отличии от линейной регрессии. Пример: 6.png и код ниже.
    - Сложность в интерпретации из-за наличия разных деревьев решений.
    +- Большие затраты на вчисления, но современные компьтеры с этим справляются нормально.
"""
from sklearn.datasets import make_circles
from sklearn.model_selection import KFold
from sklearn.linear_model import LogisticRegression
from sklearn.ensemble import RandomForestClassifier
import numpy as np

X, y = make_circles(noise=0.2, factor=0.5, random_state=1)

kf = KFold(n_splits=5, shuffle=True, random_state=1)

lr_scores = []
rf_scores = []

for train_index, test_index in kf.split(X):
    X_train, X_test = X[train_index], X[test_index]
    y_train, y_test = y[train_index], y[test_index]
    lr = LogisticRegression(solver='lbfgs')
    lr.fit(X_train, y_train)
    lr_scores.append(lr.score(X_test, y_test))
    rf = RandomForestClassifier(n_estimators=100)
    rf.fit(X_train, y_train)
    rf_scores.append(rf.score(X_test, y_test))

print("LR accuracy:", np.mean(lr_scores))
print("RF accuracy:", np.mean(rf_scores))