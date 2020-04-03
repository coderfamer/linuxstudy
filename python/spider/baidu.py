import requests
from bs4 import BeautifulSoup
import lxml

def get_request(url):
    try:
        re = requests.get(url, timeout = 30)
        if re.status_code == 200:
            re.encoding = 'utf-8'
            return re.text
    except requests.RequestException:
        return None

def do_data(soup):
    data = soup.find_all('li', attrs = {'class' : 'j_thread_list clearfix'})
    for s in data:
        comment = {}
        comment['title'] = s.find('a', attrs = {'class' : 'j_th_tit'}).text.strip()
        comment['link'] = 'https://tieba.baidu.com' + s.find('a', attrs = {'class' : 'j_th_tit'})['href']
        str_ = s.find('span', attrs = {'class' : 'tb_icon_author'})['title']
        comment['name'] = str_[6:]
        comment['replyNum'] = s.find('span' , attrs = {'class' : 'threadlist_rep_num center_text'}).text.strip()
        print(comment)


def main(page):
    url = 'https://tieba.baidu.com/f?kw=%E7%94%9F%E6%B4%BB%E5%A4%A7%E7%88%86%E7%82%B8&ie=utf-8&pn=' + str(50 * page)
    re = get_request(url)
    soup = BeautifulSoup(re, 'lxml')
    do_data(soup)



if __name__ == "__main__":
    #for i in range(10):
        main(1)