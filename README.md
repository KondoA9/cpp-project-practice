## Install lcov for coverage
```bash
$ mkdir ~/tmp
$ wget https://github.com/linux-test-project/lcov/releases/download/v1.16/lcov-1.16.tar.gz -O ~/tmp/lcov-1.16.tar.gz
$ tar xfz ~/tmp/lcov-1.16.tar.gz -C ~/tmp/
$ cd ~/tmp/lcov-1.16
$ sudo make install
```