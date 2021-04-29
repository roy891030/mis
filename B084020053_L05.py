# 除了助教給的幾種功能以外，我也另外加了min減法  div除法  roo開根號  bin轉成二進位制
# 在operation階段打上min div roo即可使用
# 使用roo 時只要輸入欲開根號的變數與roo即可，ex想對n1開根號之輸入方式：n1 roo
# 使用bin時只須輸入欲做二進位制的變數與bin即可，ex想對n1做二進位轉換之輸入方式：n1 bin

data = {
    'n1': 0,
    'n2': 10
}


while True:
    inputs = input('Please input your operation:')
    inputs = inputs.split(' ')

    if len(inputs) == 1:
        op = inputs[0]
    elif len(inputs) == 2:
        op = inputs[0]
        ter = inputs[1]

    elif len(inputs) == 3:  # add, mul
        op = inputs[0]
        ter = inputs[1]
        much = int(inputs[2])


# 以下為op的操作
    if op == 'printall':
        print(data)
    elif op == 'delall':
        data.clear()
    elif op == 'del':
        del data[ter]
    elif op == 'new':
        data[ter] = 0
    elif op == 'add':
        print(f"{data[ter]} + {much}= {data[ter] + much}")
        data[ter] += much
    elif op == 'mul':
        print(f"{data[ter]} * {much}= {data[ter] * much}")
        data[ter] *= much
    elif op == 'min':
        print(f"{data[ter]} - {much}= {data[ter] - much}")
        data[ter] -= much
    elif op == 'div':
        print(f"{data[ter]} / {much}= {data[ter] / much}")
        data[ter] /= much
    elif op == 'roo':
        print(f"√￣{data[ter]} = {data[ter] ** (1/2)}")
        data[ter] ** (1/2)
    elif op == 'bin':
        print(f"bin({data[ter]}) = {bin(data[ter])}")
        data[ter] = bin(data[ter])
    elif op == 'end':
        break
