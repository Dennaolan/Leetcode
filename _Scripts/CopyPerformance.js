var match = document.querySelector('.container__nthg').innerText.split('\n').join('').match(/Runtime:\s+(\d+\s+ms).+than\s+(.+%).+Memory Usage:\s+(.+ MB).+than\s+(.+%)/)
var child = document.createElement('input');
child.id = 'test'
child.value = `${match[1]} (**${match[2]}**), ${match[3]} (**${match[4]}**)`;
console.log(child.value)
document.documentElement.appendChild(child);
child.select()
document.execCommand("copy");
