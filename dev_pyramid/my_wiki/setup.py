import os

from setuptools import setup, find_packages

here = os.path.abspath(os.path.dirname(__file__))
README = open(os.path.join(here, 'README.txt')).read() 

requires = ['pyramid', 'pyramid_debugtoolbar', 'pymongo', 'WebError', 'pymongo']

setup(name='my_wiki',
      version='0.0',
      description='my_wiki',
      long_description=README,
      classifiers=[
        "Programming Language :: Python",
        "Framework :: Pylons",
        "Topic :: Internet :: WWW/HTTP",
        "Topic :: Internet :: WWW/HTTP :: WSGI :: Application",
        ],
      author="",
      author_email='',
      url='https://github.com/niallo/pyramid_mongodb',
      keywords='web pyramid pylons mongodb',
      packages=find_packages(),
      include_package_data=True,
      zip_safe=False,
      install_requires=requires,
      tests_require=requires,
      test_suite="my_wiki",
      entry_points = """\
      [paste.app_factory]
      main = my_wiki:main
      """,
      paster_plugins=['pyramid'],
      )

