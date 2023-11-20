#!/bin/bash
sudo docker build -t luiz_image .
sudo docker compose up -d
sudo docker exec -it luizContainer /bin/bash
