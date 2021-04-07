const char webpage[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>
<head>
<meta name="viewport" content="width=device-width, initial-scale=1">
<style>
.block {
  display: block;
  width: 100%;
  border: none;
  background-color: #4CAF50;
  color: white;
  padding: 14px 28px;
  font-size: 16px;
  cursor: pointer;
  text-align: center;
}

.block:hover {
  background-color: #ddd;
  color: black;
}
</style>
</head>
<body>

<h2>Full Width Buttons</h2>

<button class="block">Block Button</button>
<button type="button" onclick="alert('Hello world!')">Click Me!
</button>
</body>
</html>


)=====";
