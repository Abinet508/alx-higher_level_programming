#!/usr/bin/python3

from sys import argv

save_to_json_file = __import__("7-save_to_json_file").save_to_json_file
load_from_json_file = __import__("8-load_from_json_file").load_from_json_file

new_list = []

try:
    list_file = load_from_json_file("add_item.json")
    for i in list_file:
        new_list.append(i)
except:
    new_list = []

for i in range(len(argv)):
    if i != 0:
        new_list.append(argv[i])
save_to_json_file(new_list, "add_item.json")
