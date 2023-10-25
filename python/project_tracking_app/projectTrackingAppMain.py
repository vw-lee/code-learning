import datetime
from collections import defaultdict

print ("Welcome to Project Tracker v0.1.1")
# todo
# append the project entry to a text file with markdown notation
# check the project name against exisiting entries
# check the project number against exisiting entries
# get a proper date time notation for the due date
# add sub tasks
def task_scheduler (project_name = 'blank project', project_number = 'default', deadline = 'date'):
    project_name = input ("What's the name of the project you are adding?\n")
    project_number = input ("Give this project an index, for example 'a32'\n")
    print ("The project you just entered is "+ project_name, "and is numbered as " + project_number)
    project_deadline = input ("When is it due?\n")
    print ("The due date is " + project_deadline)
    return

task_scheduler()