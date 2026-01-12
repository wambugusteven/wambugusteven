let currentExpression = "0";

function appendNumber (number) {
  if(currentExpression === 0) {
    currentExpression = number;
  } else {
    currentExpression += number;
  }
  document.getElementById("screen").value = currentExpression;
}

function appendOperater (operater) {
    currentExpression += ` ${operater} `;
    document.getElementById("screen").value = currentExpression;
}

function clear () {
    currentExpression = '';
    document.getElementById("screen").value = currentExpression;
}

function deleteInput () {
   currentExpression = substring(0, currentExpression.lenght - 1);
   document.getElementById("screen").value = currentExpression;
}

function evaluate () {

}