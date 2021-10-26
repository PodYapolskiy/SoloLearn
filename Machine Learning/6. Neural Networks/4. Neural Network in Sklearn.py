from matplotlib import pyplot as plt
from sklearn.model_selection import train_test_split
from sklearn.neural_network import MLPClassifier
from sklearn.datasets import make_classification
from utils import decor

# Создаём искуственный датасет, состоящий из матрицы свойств X и массива целевых значений y.
X, y = make_classification(
    n_features    = 2,  # Кол-во свойств
    n_redundant   = 0,  # Кол-во избыточных свойств
    n_informative = 2,  # Кол-во влияющих свойств
    random_state  = 3,  # Случайное состояние, гарантирующее одинаковый результат
)
print(X)
decor()
print(y)
decor()


# Создание многолойного перцептрона
X_train, X_test, y_train, y_test = train_test_split(X, y, random_state=3)

mlp = MLPClassifier(
    max_iter=1000,  # Кол-во эпох, кол-во итераций, в которых будет использован каждый датапоинт
    hidden_layer_sizes=(100, 50),  # 2 скрытых слоя: 1-ый со 100 нейронами, 2-о1 с 50
    alpha=0.0001,  # Шаг, с которым нейросеть меняет коэфиценты при поиске минимума loss function
    solver='adam',  # Используемый алгоритм
    random_state=3
)
# Уменьшение alpha, порой, требует увеличение max_iter
mlp.fit(X_train, y_train)
print("Accuracy:", mlp.score(X_test, y_test))


# Визуализация
plt.scatter(X[y==0][:, 0], X[y==0][:, 1], s=100, edgecolors='k')
plt.scatter(X[y==1][:, 0], X[y==1][:, 1], s=100, edgecolors='k', marker='^')
plt.show()

"""
Нейронные сети используют метод, называемый градиентным спуском (gradient descent). Суть алгоритма в том, чтобы найти минимум у функции затрат (loss / cost function), делая маленькие шаги, которые постепенно уменьшают значение функции.
Направление этих шагов определяется средним из всех подталкиваний, которые применялись к каждому параметру (весов и сдвигов), чтобы улучшить точность кадого тренировочного образца. 
Каждое прямое и обратное прохождение через данные, которые мы передали комьютеру - итерация. Больше данных может означать меньше итераций на сближение, так как они более точные.
Обычно мы не используем все данные для обучения в итерации из-за вычислительной дороговизны. Мы разбиваем данные на мини-партии (mini-batches) вместо использования всего.
"""