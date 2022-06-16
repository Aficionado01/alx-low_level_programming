#!/usr/bin/python3
# The file crackme4 == 100-crackme.pyc
if __name__ == '__main__':
    from importlib import import_module
    hidden_4 = import_module('100-crackme')
    for name in sorted(dir(hidden_4)):
        if name[0:2] != '__':
            print('Module item - {:s}'.format(name))
    print('The password is "{}"'.format(hidden_4.ok))
