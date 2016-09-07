
addCat = (catName, catCount, catBack) => {
  fetch('https://po4m3psh3d.execute-api.us-east-1.amazonaws.com/prod/CatDBManager', {
    method: "POST",
    mode: 'cors',
    body: JSON.stringify(
      {
        "operation": "create",
        "tableName": "CatTable",
        "payload": {
            "Item": {
                "Id": `${ catCount + 1 }`,
                "name": `${ catName }`
            }
        }
      }
    )
  })
  .then(
    (response) => {
      return response.json()
    }
  )
  .then(
    (data) => {
      console.log('addCat worked')
      $( "#cats" ).empty();
      return getCats(catBack)
    }
  )
  .catch(
    (err) => {
      console.log("'Tis erroneous: ", err)
    }
  )
};
