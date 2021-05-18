const http = require('http');

const hostname = '127.0.0.1';
const port = 3000;

const server = http.createServer((req, res) => {
  res.statusCode = 200;
  res.setHeader('Content-Type', 'text/html');
  res.end(`<!DOCTYPE html>
  <html lang="en">
  
  <head>
      <meta charset="UTF-8">
      <meta http-equiv="X-UA-Compatible" content="IE=edge">
      <meta name="viewport" content="width=device-width, initial-scale=1.0">
      <title>Document</title>
      <style>
          .container {
              height: 544px;
              width: 100%;
              border: 2px solid black;
              display: flex;
              /* flex-direction: column;
              flex-direction: row-reverse;
              flex-direction: column-reverse; */
              justify-content: center;
              justify-content: space-around;
              justify-content: space-between;
              justify-content: space-evenly;
              /* align-items: flex-end; */
              align-items: center;
              /* align-items: flex-start; */
              flex-wrap: wrap;
  
          }
  
          .items {
              border: 3px solid black;
              overflow:hidden;
              height: 40px;
              margin: 10px;
  
          }
          #items1{
              flex-grow: 3;
              /* flex-shrink: 2; */
              align-self: flex-start;
              /* align-self: flex-start; */
              background-color: aqua;
              align-self: flex-end;
              /* align-self: center; */
          }
          #items3{
              align-self: flex-start;
          }
          
      </style>
  </head>
  
  <body>
      <div class="container">
          <div class="items" id="items1">START Lorem, ipsum dolor sit amet consectetur adipisicing elit. Illo officia
              blanditiis omnis commodi eos!</div>
          <div class="items" id="items2">START Lorem, ipsum dolor sit amet consectetur adipisicing elit. Illo officia
              blanditiis omnis commodi eos!</div>
          <div class="items" id="items3">START Lorem, ipsum dolor sit amet consectetur adipisicing elit. Illo officia
              blanditiis omnis commodi eos!</div>
          <!-- <div class="items" id="items4">START Lorem, ipsum dolor sit amet consectetur adipisicing elit. Illo officia
              blanditiis omnis commodi eos!</div>
          <div class="items" id="items5">START Lorem, ipsum dolor sit amet consectetur adipisicing elit. Illo officia
              blanditiis omnis commodi eos!</div>
          <div class="items" id="items6">START Lorem, ipsum dolor sit amet consectetur adipisicing elit. Illo officia
              blanditiis omnis commodi eos!</div> -->
      </div>
  </body>
  
  </html>`);
});

server.listen(port, hostname, () => {
  console.log(`Server running at http://${hostname}:${port}/`);
});