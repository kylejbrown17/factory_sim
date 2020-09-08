#!/usr/bin/env python

import sys
import subprocess

def generateNodeTag(num):
    tagStr = '  <node name="bot' + str(num) + '" pkg="test" type="testcontroller.py" required="$(arg auto-close)"/>\n'
    return tagStr

numBots = 2
if len(sys.argv) > 1:
    numBots = int(sys.argv[1])

launchStart = """<?xml version="1.0"?>
<launch>
  <!-- start Webots -->
  <arg name="no-gui" default="false," doc="Start Webots with minimal GUI"/>
  <include file="$(find test)/launch/webots.launch">
    <arg name="mode" value="realtime"/>
    <arg name="no-gui" value="$(arg no-gui)"/>
    <arg name="world" value="$(find test)/worlds/basic.wbt"/>
  </include>

  <arg name="auto-close" default="false" doc="Startup mode"/>
  <env name="LD_LIBRARY_PATH" value="$(env LD_LIBRARY_PATH):$(env WEBOTS_HOME)/lib/controller"/>
  <env name="PYTHONPATH" value="$(env PYTHONPATH):$(env WEBOTS_HOME)/lib/controller/python27" unless="$(eval '1' if env('ROS_DISTRO') == 'kinetic' else '0')" />
  <env name="PYTHONPATH" value="$(env PYTHONPATH):$(env WEBOTS_HOME)/lib/controller/python38" if="$(eval '1' if env('ROS_DISTRO') == 'kinetic' else '0')" />
"""

launchEnd = """  <node name="centre" pkg="test" type="node.py" required="$(arg auto-close)"/>
</launch>
"""

launchString = launchStart
for i in range(numBots):
    launchString += generateNodeTag(i)
launchString += launchEnd
print(launchString)

launchFile = open("launch/test.launch", "w")
res = launchFile.write(launchString)
launchFile.close()

subprocess.call(["roslaunch", "test", "test.launch"])
