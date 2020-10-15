# rhipo

Rhipo is an alternative implementation of the AMD HIP library. Rather than executing GPU kernels on real GPUs, Rhipo redirects the GPU kernel execution to MGPUSim.

## Compilation

### Dependency

Assuming you are using ubuntu, you need to install the following packages.

- libcurl-dev

### Build

Run the following command to build the library.

```bash
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Debug ..
make
```

The library will appear under `build/lib`

## How to use

- Start the MGPUSim server.
- Start another terminal window, set the required environment variables as follows.
  - Set `RHIPO_SERVER_URL` to the MGPUSim URL, including the port number. For example, the URL can be `localhost:8080`.
  - Set the `LD_LIBRARY_PATH` environment variable. Suppose your RHIPO folder is at `~/rhipo`, the `LD_LIBRARY_PATH` should be set to `~/rhipo/build/lib`.
- Assuming you want to execute `vecAdd`. First use `ldd` to check if the rhipo's library will be linked, by running `ldd vecAdd`.
- Run your HIP program with `./vecAdd`.
