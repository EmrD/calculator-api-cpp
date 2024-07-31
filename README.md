# C++ API Service Starter

This is a C++ API service starter project.

## Getting Started

To start the service locally, run:

```sh
g++ -o calculator-api main.cpp -std=c++11
./calculator-api
```

## Local Test

To test the service; you can use cURL requests.

```sh
curl "http://localhost:8080/add?a=5&b=3"
curl "http://localhost:8080/subtract?a=10&b=4"
curl "http://localhost:8080/multiply?a=2&b=7"
curl "http://localhost:8080/divide?a=20&b=5"
```
