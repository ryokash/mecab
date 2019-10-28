# Unofficial MeCab binding module for many OS (Windows, macOS, and Linux)

## Instlation

```sh
$ pip install mecab-python-windows
```

or

```sh
$ python -m pip install mecab-python-windows
```

## Usage

```python
>>> import MeCab
>>> t = MeCab.Tagger()
>>> sentence = "太郎はこの本を女性に渡した。"
>>> print(t.parse(sentence))
太郎    名詞,固有名詞,人名,名,*,*,太郎,タロウ,タロー
は      助詞,係助詞,*,*,*,*,は,ハ,ワ
この    連体詞,*,*,*,*,*,この,コノ,コノ
本      名詞,一般,*,*,*,*,本,ホン,ホン
を      助詞,格助詞,一般,*,*,*,を,ヲ,ヲ
女性    名詞,一般,*,*,*,*,女性,ジョセイ,ジョセイ
に      助詞,格助詞,一般,*,*,*,に,ニ,ニ
渡し    動詞,自立,*,*,五段・サ行,連用形,渡す,ワタシ,ワタシ
た      助動詞,*,*,*,特殊・タ,基本形,た,タ,タ
。      記号,句点,*,*,*,*,。,。,。
EOS
>>> n = t.parseToNode(sentence)
>>> while n:
>>>     print(n.surface, "\t", n.feature)
>>>     n = n.next
         BOS/EOS,*,*,*,*,*,*,*,*
太郎     名詞,固有名詞,人名,名,*,*,太郎,タロウ,タロー
は       助詞,係助詞,*,*,*,*,は,ハ,ワ
この     連体詞,*,*,*,*,*,この,コノ,コノ
本       名詞,一般,*,*,*,*,本,ホン,ホン
を       助詞,格助詞,一般,*,*,*,を,ヲ,ヲ
女性     名詞,一般,*,*,*,*,女性,ジョセイ,ジョセイ
に       助詞,格助詞,一般,*,*,*,に,ニ,ニ
渡し     動詞,自立,*,*,五段・サ行,連用形,渡す,ワタシ,ワタシ
た       助動詞,*,*,*,特殊・タ,基本形,た,タ,タ
。       記号,句点,*,*,*,*,。,。,。
         BOS/EOS,*,*,*,*,*,*,*,*
```

## License
MeCab is copyrighted free software by Taku Kudo <taku@chasen.org> and Nippon Telegraph and Telephone Corporation, and is released under any of the GPL (see the file GPL), the LGPL (see the file LGPL), or the BSD License (see the file BSD).
Also, this Python binding is under any of the GPL, the LGPL, or the BSD License.