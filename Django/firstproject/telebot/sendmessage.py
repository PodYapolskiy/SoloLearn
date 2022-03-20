import requests
from .models import TeleSettings


def send_telegram(tg_name, tg_phone):
    settings = TeleSettings.objects.get(id=1)
    if settings:
        token = str(settings.tg_token)
        chat_id = str(settings.tg_chat)
        text = str(settings.tg_message)

        api = 'https://api.telegram.org/bot'
        url = f"{api}{token}/sendMessage"

        if text.find('{') and text.find('}') and text.rfind('{') and text.rfind('}'):
            part_1 = text[0:text.find('{')]
            part_2 = text[text.find('}')+1:text.rfind('{')]
            part_3 = text[text.rfind('}'):-1]
            text_slice = part_1 + tg_name + part_2 + tg_phone + part_3
        else:
            text_slice = text

        try:
            request = requests.post(url, data={
                'chat_id': chat_id,
                'text': text_slice,
            })
        except:
            pass
        finally:  # Лучше записывать в лог файл
            if request.status_code != 200:
                print('Ошибка отправки!')
            elif request.status_code == 500:
                print('Ошибка 500')
            else:
                print('Всё, ок!')
