import re
prefix = 'https://github.com/alicek106/bj-algorithm-solutions/blob/master/src/{}-{}-{}.cpp'
category = {'1':'greedy', '2':'dp', '3':'data-structure', 
        '4':'bfs-dfs', '5':'binary-search', '6':'sort', '9999':'etc'}

with open("input.txt", "r") as f:
    regexp = re.compile('\[(\d*).{3}\]')
    current_category = None;

    while True:
        line = f.readline()
        if not line: break
        result = regexp.search(line)

        if result:
            line = '[' + line.rstrip() + ']';
            full_link = line + '(' + prefix.format(current_category, category[current_category], result.group(1)) +')\n' 
            print(full_link)

        if line[:2] == '##':
            current_category = line.split(' ')[1].replace('.', '');
            print(line);
            continue
