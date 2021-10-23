"""
Локтевой график (Elbow Graph) - модель, которая оптимизирует исполнение без добавления лишней сложности.
Назван так скорее всего, потому что лучшее значение находится на конце "локтя" (Пример с 10)

На графике выбираем n_estimators = 10, так как именно здесь наивысшее исполнение при минимальном кол-ве деревьев.

Объяснение почему выбираем 10:
    Вы можете видеть, что сюжет сильно колеблется вправо. Вероятно, это связано с тем, что деревья выбирают определенные объекты в наборе данных, что изменяет результаты. Таким образом, лес с 64 деревьями может работать лучше, чем лес с 70 деревьями, просто благодаря выбранным функциям. Проблема с этим заключается в том, что данные, не используемые в обучении, могут не иметь этих специфических особенностей. Поэтому мы должны посмотреть на кривую, которая проходит через середину колебаний, чтобы увидеть, как она ведет себя на самом деле. На кривой есть точка (около 10 деревьев), где добавление дополнительных деревьев начинает давать небольшой выигрыш. Вам нужно небольшое количество деревьев, чтобы уменьшить время вычислений, необходимое для прогнозирования.
"""
import pandas as pd
from sklearn.datasets import load_breast_cancer
from sklearn.ensemble import RandomForestClassifier
from sklearn.model_selection import GridSearchCV
import matplotlib.pyplot as plt

cancer_data = load_breast_cancer()
df = pd.DataFrame(cancer_data['data'], columns=cancer_data['feature_names'])
df['target'] = cancer_data['target']

X = df[cancer_data.feature_names].values
y = df['target'].values

n_estimators = list(range(1, 100))
param_grid = {
    'n_estimators': n_estimators,
}

rf = RandomForestClassifier()
gs = GridSearchCV(rf, param_grid, scoring='f1', cv=5)
gs.fit(X, y)
print("best params:", gs.best_params_)


scores = gs.cv_results_['mean_test_score']  # [0.91564148, 0.90685413, ...]
plt.plot(n_estimators, scores)
plt.xlabel("n_estimators")
plt.ylabel("accuracy")
plt.xlim(0, 100)
plt.ylim(0.9, 1)
plt.show()