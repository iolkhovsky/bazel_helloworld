1) Terminal -> Configure Tasks -> Create tasks.json file from template -> Others

{
    "version": "2.0.0",
    "tasks": [
        {
            "label": "Build (Debug)",
            "type": "shell",
            "command": "bazel build //app:main-app -c dbg",
            "group": {
                "kind": "build",
                "isDefault": true
            },
        }
    ]
}

2) Run -> Add Configuration ->  C++ (GDB/LLDB) 
