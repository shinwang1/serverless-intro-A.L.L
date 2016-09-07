
catBack = (data) => {
  let cats = data.Items;

  let count = 0;
  cats.map( (cat, i) => {
    $('#cats').append(cats[i].name + '<br>');
    count += 1;
  })

  return count
}
