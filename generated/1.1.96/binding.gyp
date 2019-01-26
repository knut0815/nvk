{
  "variables": {
    "root": "../..",
    "platform": "<(OS)",
    "vkVersion": "1.1.96.0",
    "vkSDK": "C:/VulkanSDK"
  },
  "conditions": [
    [ "platform == 'win'", { "variables": { "platform": "win" } } ],
    [ "platform == 'mac'", { "variables": { "platform": "darwin" } } ]
  ],
  "targets": [
    {
      "target_name": "action_after_build",
      "type": "none",
      "conditions": []
    },
    {
      "target_name": "addon",
      "sources": [
        "./src/index.cpp"
      ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")",
        "<(root)/lib/include/",
        "<(vkSDK)/<(vkVersion)/Include"
      ],
      "library_dirs": [
        "<(root)/lib/<(platform)/<(target_arch)/GLFW",
        "<(vkSDK)/<(vkVersion)/Lib"
      ],
      "conditions": [
        [
          "OS=='win'",
          {
            "cflags": [
              "-stdlib=libstdc++"
            ],
            "link_settings": {
              "libraries": [
                "-lglfw3dll.lib",
                "-lvulkan-1.lib"
              ]
            },
            "defines": [
              "WIN32_LEAN_AND_MEAN",
              "VC_EXTRALEAN",
              "_ITERATOR_DEBUG_LEVEL=0",
              "_HAS_EXCEPTIONS=1"
            ],
            "msvs_settings": {
              "VCCLCompilerTool": {
                "FavorSizeOrSpeed": 1,
                "StringPooling": "true",
                "Optimization": 2,
                "WarningLevel": 3,
                "AdditionalOptions": ["/MP /EHsc"],
                "ExceptionHandling": 1
              },
              "VCLibrarianTool": {
                "AdditionalOptions" : ["/NODEFAULTLIB:MSVCRT"]
              },
              "VCLinkerTool": {
                
      "LinkTimeCodeGeneration": 1,
      "LinkIncremental": 1
    ,
                "AdditionalLibraryDirectories": [
                  "../@PROJECT_SOURCE_DIR@/lib/<(platform)/<(target_arch)",
                ]
              }
            }
          }
        ]
      ]
    }
  ]
}