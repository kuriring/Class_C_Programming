# Web |  Blackout

# Problem Link
- http://218.152.3.189/

```
blackout...
```

- 위의 모습이 문제화면이다. 위의 문제 링크에 http://218.152.3.189/index.php가로 의 접속이 가능하며, blackout(정전)이 되면 .swp 파일을 생성한다.

- http://218.152.3.189/.index.php.swp 를 입력하면 index.php.swp 파일이 자동으로 다운된다.

```
cat index.php.swp

b0VIM 7.4�X`
U3210#"! Utadx��������정전이당..!?>$flag = "FLAG{vmfformsmsvmfformzzz}";<?php<meta charset='utf-8' />%>"
```
- 다운받을 파일을 cat을 통해 읽어주면 문자열이 출력 된다. 

# flag

```
FLAG{vmfformsmsvmfformzzz}
```
