from django.shortcuts import render


def first_page(request):
    a = '<a href="admin">Пацан Админского</a>'
    return render(request, './index.html', {
        'a': a
    })
