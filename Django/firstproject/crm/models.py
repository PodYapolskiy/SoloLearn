from django.db import models


class StatusCrm(models.Model):
    status_name = models.CharField(max_length=200, verbose_name="Название статуса")
    
    def __str__(self):
        return self.status_name

    class Meta:
        """Обозначает то, как будет отображаться класс в единственном и множественном числе"""
        verbose_name = "Статус"
        verbose_name_plural = "Статусы"


class Order(models.Model):
    """
        Варианты параметра on_delete у ForeignKey
    CASCAD - При удалении родителя, удаляются все потомки
    SET_NULL - При удалении, потомки переходят в состояние NULL
    PROTECT - Без возможности удаления
    """
    order_dt = models.DateTimeField(auto_now=True)
    order_name = models.CharField(max_length=200, verbose_name="Имя")
    order_phone = models.CharField(max_length=200, verbose_name="Телефон")
    order_status = models.ForeignKey(StatusCrm, on_delete=models.PROTECT, null=True, blank=True, verbose_name="Статус")

    def __str__(self):
        return self.order_name

    class Meta:
        """Обозначает то, как будет отображаться класс в единственном и множественном числе"""
        verbose_name = "Заказ"
        verbose_name_plural = "Заказы"


class CommentCrm(models.Model):
    # При удалении родителя (заказа), удалится и комментарий к нему
    comment_binding = models.ForeignKey(Order, on_delete=models.CASCADE, verbose_name='Заявка')
    comment_text = models.TextField(verbose_name="Текст комментария")
    comment_dt = models.DateTimeField(auto_now=True, verbose_name="Дата создания")

    def __str__(self):
        return self.comment_text

    class Meta:
        """Обозначает то, как будет отображаться класс в единственном и множественном числе"""
        verbose_name = "Комментарий"
        verbose_name_plural = "Комментарии"
