
catBack = (data) => {
  let cats = data.Items;

  cats.map( (cat, i) => {
    $('#cats').append(cats[i].name + '<br>');
  })
}
