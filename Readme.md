## Requirements

This project requires the companion module `idb`, you can install it from the original [repo](https://github.com/facebook/idb)

Install with pip:
```
pip3.6 install fb-idb
```

## Building from Source

```
open idb_companion.xcworkspace
```

This will open an Xcode project that you can build and run.

After opening the Xcode project you will need to add a `--udid` argument for launch.
- Get the UDID of either your device or simulator
  - Window -> Devices and Simulators
  - Select the device or simulator you care about
  - Copy the value in the `Identifier` section of the header
- Project -> Scheme -> Edit Scheme (or `cmd + <`)
- Run -> Arguments
- Click the `+` under the `Arguments Passed on Launch` section
- Enter `--udid <UDID copied above>`
- Run the `idb_companion` target on `My Mac`

Once `idb_companion` has launched, search the console output for the word "port", there will be a few entries and there should be a port number on the same line. Copy that value as you will use it to attach the `idb` python client to the `idb_companion` gRPC server.

```
$ idb connect localhost <Port # from above>
```

Now you can execute any `idb` commands and it will go through the `idb_companion` started by Xcode which is now debuggable.
