from django.contrib import admin
from .models import Order, StatusCrm, CommentCrm


class Comment(admin.StackedInline):
    model = CommentCrm  # Обязательное поле, указывающее на класс использемой модели
    fields = ('comment_dt', 'comment_text')  # Поля, которые будут показываться
    readonly_fields = ('comment_dt',)
    extra = 1  # Кол-во пустых полей, которыми можно воспользоваться, чтобы создать новые записи


class OrderAdmin(admin.ModelAdmin):
    list_display = ('id', 'order_name', 'order_phone', 'order_status', 'order_dt')  # Имена полей модели
    list_display_links = ('id', 'order_name')  # Ссылки полей
    search_fields = ('id', 'order_name', 'order_phone', 'order_dt')  # Поля, по которым можно искать
    list_filter = ('order_status',)  # Фильтр записей по статусу
    list_editable = ('order_status', 'order_phone')  # Какие поля можно изменять прямо в таблице
    list_per_page = 4  # Сколько записей отражается в скрытом виде
    list_max_show_all = 100  # Сколько записей отображается после нажатия show all

    fields = ('id', 'order_status', 'order_dt', 'order_name', 'order_phone')  # Порядок полей в модели заказа
    readonly_fields = ('id', 'order_dt')  # Поля, которые нельзя изменить
    
    inlines = (Comment, )


admin.site.register(Order, OrderAdmin)
admin.site.register(StatusCrm)
admin.site.register(CommentCrm)
