# Autocreator sctipt. Creates stub files
import sys

class Creator(object):
	def __init__(self):
		languages = [
			{'name': 'csharp'},
			{'name': 'cpp'},
			{'name': 'java'},
			{'name': 'python'},
			{'name': 'javascript'},
			{'name': 'r'},
			{'name': 'erlang'},
			{'name': 'haskell'},
			{'name': 'agda'},
			{'name': 'clisp'},
			{'name': 'fsharp'},
		]
	
	def create(self):
		pass

		#if not os.path.exists(directory):
    	#	os.makedirs(directory)

if __name__ == '__main__':
	# raise Exception("Run protection: Comment the line to run autocreator script")
	#
	Creator().create()
