"""
Проблема с перетренированностью на полном датасете
https://api.sololearn.com/DownloadFile?id=3914

Решение проблемы - Prune (Обрезка, сокращение)
Есть 2 типа prune:
    Pre-pruning - Задаём правило до построения дерева, которая должны будут прекращать overfitting
    Post-pruning - Выстраиваем всё дерево и затем по определённому праилу обрезаем его узлы

Pre-pruning:
    * Max depth - ограничение высоты дерева
    * Leaf size - не разделять данные, если кол-во выборок в этом узле ниже установленного порога
    * Number of leaf nodes - ограничение кол-ва узлов во всём дереве
"""
import pandas as pd
from sklearn.tree import DecisionTreeClassifier
from sklearn.model_selection import GridSearchCV

df = pd.read_csv('D:\\SoloLearn\\Machine Learning\\titanic.csv')
df['male'] = df['Sex'] == 'male'
X = df[['Pclass', 'male', 'Age', 'Siblings/Spouses', 'Parents/Children', 'Fare']].values
y = df['Survived'].values

param_grid = {
    'max_depth': [5, 15, 25],
    'min_samples_leaf': [1, 3],
    'max_leaf_nodes': [10, 20, 35, 50]
}

dt = DecisionTreeClassifier(criterion='entropy')

# Объект, оценивающий модель и выдающий лучший ряд параметров, используя определённую метрику и заданное кол-во перекрёстных проверок (k-fold cross validations)
gs = GridSearchCV(dt, param_grid, scoring='f1', cv=5)
gs.fit(X, y)

print("best params:", gs.best_params_)  # Порой бывает разное исполнение с очень близким результатом. Выбираем модель, с меньшим кол-вом разбиений.
print("best score:", gs.best_score_)