#!/usr/bin/python3

"""
File: 7-add_item.py
Description: The module deals with loading, adding, and savig.
Author: Mamabolo Katlego <rabotaikatlego@gmail.com>
Date Created: 05 Dec 2023
"""
from sys import argv as av
from os.path import exists
save = __import__('5-save_to_json_file').save_to_json_file
load = __import__('6-load_from_json_file').load_from_json_file

name = "add_item.json"

av.remove(av[0])
pre_loaded = []

if exists('add_item.json'):
    pre_loaded = load(name)

pre_loaded += av

save(pre_loaded, name)
