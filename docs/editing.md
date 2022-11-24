## Change include guards in .h files to #pragma once

##### Raw sed commands:
```bash
sed -ri "/.*endif.*$/d" {}
sed -i '0,/#ifndef/{/#ifndef/d;}' {}
sed -i '0,/#define.*/s//#pragma once/' {}
```

 ##### With find to parse whole subtree
```bash
find . -not -path 'exclude path' -type f -name "*.h" -exec sed -ri "/.*endif.*$/d" {} +
find . -not -path 'exclude path' -type f -name "*.h" -exec sed -i '0,/#ifndef/{/#ifndef/d;}' {} +
find . -not -path 'exclude path' -type f -name "*.h" -exec sed -i '0,/#define.*/s//#pragma once/' {} +
```

##### Some explanations
Recursive sed with find: https://victoria.dev/blog/how-to-replace-a-string-with-sed-in-current-and-recursive-subdirectories/  
Exclude dirs from find: https://stackoverflow.com/questions/13460482/exclude-a-sub-directory-using-find  
Match only first occurence with sed: https://stackoverflow.com/a/23697254/1231192
