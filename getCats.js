
getCats = (catBack) => {
  fetch('https://po4m3psh3d.execute-api.us-east-1.amazonaws.com/prod/CatDBManager', {
    method: "POST",
    mode: 'cors',
    body: JSON.stringify(
      {
        "operation": "list",
        "tableName": "CatTable",
        "payload": {}
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
      console.log('getCats worked')
      return catBack(data)
    }
  )
  .catch(
    (err) => {
      console.log("'Tis erroneous: ", err)
    }
  )
};
