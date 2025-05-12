import threading
import requests

class Download:
    def download(self, url, callback_word_count):
        print(f'线程编号：{threading.get_ident()} 开始下载：{url}')
        reponse = requests.get(url)
        reponse.encoding = 'utf-8'
        callback_word_count(url, reponse.text)
    
    def start_download(self, url, callback_word_count):
        thread = threading.Thread(target=self.download, args=(url, callback_word_count))
        thread.start()
    
    
def word_count(url, result):
    """
    普通函数
    """
    print(f"{url}: {len(result)}->{result[:5]}")
    

def main():
    download = Download()
    download.start_download('http://localhost:8000/novel1.txt', word_count)
    download.start_download('http://localhost:8000/novel2.txt', word_count)
    download.start_download('http://localhost:8000/novel3.txt', word_count)