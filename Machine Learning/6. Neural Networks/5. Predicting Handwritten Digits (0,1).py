"""
Здесь будем работать с MNIST database of handritten digits.
    M - Modified
    NIST - National Institute of Standards and Technology
"""
import matplotlib.pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.neural_network import MLPClassifier
from sklearn.datasets import load_digits
from utils import decor

X, y = load_digits(n_class=2, return_X_y=True)
print(X.shape, y.shape)  # 360 картинок с 64 свойствами (8px * 8px).
decor()
print(X[0])  # Информация по каждому пикселю первой картинке
decor()
print(y[0])  # Цифра, которую нужно определить нейронке
decor()

print(X[0].reshape(8, 8))
decor()


X_train, X_test, y_train, y_test = train_test_split(X, y, random_state=2)
mlp = MLPClassifier()
mlp.fit(X_train, y_train)

x1, x2 = X_test[0], X_test[1]
print(mlp.predict([x1]), mlp.predict([x2]))  # [0] [1]
decor()

print("Accuracy:", mlp.score(X_test, y_test))

# Визуализируем 1 и 2 картинки
plt.matshow(X[0].reshape(8, 8), cmap=plt.cm.gray)
plt.xticks(())  # remove x tick marks
plt.yticks(())  # remove y tick marks

plt.matshow(X[1].reshape(8, 8), cmap=plt.cm.gray)
plt.xticks(())
plt.yticks(())

plt.show()
