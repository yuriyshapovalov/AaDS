
#!/usr/bin/env python
from subprocess import call

clean_start_message = "====================== CLEANING UP ======================="

def clean():
    print(clean_start_message)

    call(['rm', '-r', 'bin'])
    call(['rm', '*~'])

if __name__ == '__main__':
    clean()