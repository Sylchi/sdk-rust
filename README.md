# Proxy SDK Client

## Overview

This project provides a compiled SDK client binary for efficient communication with a proxy server. The SDK is designed to be used in C projects and handles various commands and data relay operations.

## Features

- Pre-compiled binary for easy integration
- Bidirectional communication with proxy server
- Automatic reconnection with exponential backoff
- Message framing for reliable data transmission
- C language compatibility

## Setup

1. Download the pre-compiled binary for your platform from the releases page.
2. Include the binary in your project directory.
3. Add the following header to your C project:

## Usage
```
#include <stdio.h>
#include "sdk_rust.h"
int main() {
  const char hostname = "localhost";
  int port = 3030;
  int result = connect(hostname, port);
  if (result != 0) {
    fprintf(stderr, "SDK client failed with error code: %d\n", result);
  }
  return result;
}
```

## Function Reference

`int connect(const char *hostname, int port)`

Connects to the specified host and port, then runs the SDK client.

- Parameters:
  - `hostname`: The host to connect to (e.g., "localhost")
  - `port`: The port number to use
- Returns: 0 on success, non-zero error code on failure
