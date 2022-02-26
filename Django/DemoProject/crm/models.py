from django.db import models

# Create your models here.


class Order(models.Model):
    # id - создаётся автоматиески
    order_dt = models.DateTimeField(auto_now=True)
    order_name = models.CharField(max_length=200, verbose_name="Имя")
    order_phone = models.CharField(max_length=200, verbose_name="Телефон", )

    def __str__(self):
        return f"{self.order_name}"

    class Meta:
        """Обозначает то, как будет отображаться класс в единственном и множественном числе"""
        verbose_name = "Заказ"
        verbose_name_plural = "Заказы"
