#!/bin/bash

echo "=========================="
echo "Starting App skynetmini for {APP_NAME_PRETTY}"


systemctl start skynetmini
systemctl start rosnodeChecker
