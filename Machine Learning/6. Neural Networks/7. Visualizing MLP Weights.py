import numpy as np
import matplotlib.pyplot as plt
from sklearn.datasets import fetch_openml
from sklearn.neural_network import MLPClassifier
from utils import decor

X, y = fetch_openml('mnist_784', version=1, return_X_y=True)

print(X.shape, y.shape)  # Размеры датасета
decor()

print(np.min(X), np.max(X))  # Использование 8-мибитного кодирования цветов
decor()

print(y[:5])  # Первые пять значений, которые нужно предсказать (не целочисленные)
decor()


# Для примера будем использовать только образцы от 0 до 3
X5 = X[y <= '3']
y5 = y[y <= '3']

mlp = MLPClassifier(
    hidden_layer_sizes=(6,),
    max_iter=200,
    solver='sgd',  # Используя "tochastic gradient descent", понижаем шаг alpha
    alpha=1e-4,
    random_state=2
)
mlp.fit(X5, y5)

print(len(mlp.coefs_))  # 2
print(mlp.coefs_[0].shape)  # (784, 6) 784 - коэффиценты входящих значенией (пикселей), 6 - кол-во узлов, скрытого слоя
print(mlp.coefs_)  # 1-ый массив - коэффиценты скрытого слоя, 2-ой - коэффиценты выходного слоя
decor()


# Визуализация скрытого слоя
fig, axes = plt.subplots(
    nrows=2,  # Кол-во рядов
    ncols=3,  # Кол-во столбцов
    figsize=(5, 4)  # Размер фигуры в дюймах
)

for i, ax in enumerate(axes.ravel()):
    coef = mlp.coefs_[0][:, i]  # Выбираем все коэффиценты одного скрытого слоя

    ax.matshow(coef.reshape(28, 28), cmap=plt.cm.gray)  # Добавляет картинку скрытого слоя в серой гамме размером 28 на 28 пикселей
    ax.set_xticks(())  # Убираем Метки
    ax.set_yticks(())
    ax.set_title(i + 1)  # Подписываем картинку каждого скрытого слоя

plt.show()
"""
4 и 6 узлы определяют цифру 3.
1 узел определяет является ли цифра 0 или 2.
Не каждый скрытый узел будет иметь очевидное использование.


Преимущества и недостатки Нейронных сетей:
    - Сложны в интерпретации и объяснении работы
    - Времени на тренировку уходит на порядок больше, чем у других моделей
    + Громадным плюсом является исполнение. Ни одна другая модель не сможет дать такого результата в решении разноплановых задач
"""