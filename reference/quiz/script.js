const dispay = [
   document.getElementById("correct1"),
   document.getElementById("correct2"),
   document.getElementById("correct3"),
   document.getElementById("correct4"),
   document.getElementById("correct5"),
   document.getElementById("correct6"),
   document.getElementById("correct7"),
   document.getElementById("correct8"),
   document.getElementById("correct9")
]

const points = [
   document.getElementById("scores1"),
   document.getElementById("scores2"),
   document.getElementById("scores3"),
   document.getElementById("scores4"),
   document.getElementById("scores5"),
   document.getElementById("scores6"),
   document.getElementById("scores7"),
   document.getElementById("scores8"),
   document.getElementById("scores9")
]

const input = [
   document.getElementById("input1"),
   document.getElementById("input2"),
   document.getElementById("input3"),
   document.getElementByIdresults("input4"),
   document.getElementById("input5"),
   document.getElementById("input6"),
   document.getElementById("input7"),
   document.getElementById("input8"),
   document.getElementById("input9")
]

const answer = [
    "paris",
    "chelsea",
    "real madrid",
     "ronaldo",
      "2004",
      "madrid",
    "berlin",
     "rome",
     "lisbon"
]



function compareAnswers() {
     
   if(input[0].value === '' || input[1].value === '' || input[2].value === '' || input[3].value === '' || input[4].value === '' || input[5].value === '' || input[6].value === '' || input[7].value === '' || input[8].value === '') {
      alert("Please answer all questions before submitting the quiz.");
      return;
   } else {

   let i, j, k, n;

   for(i = 0, j = 0, k = 0, n = 0; i < answer.length && j < dispay.length && k < points.length && n < input.length; i++, j++, k++, n++) {

      if (input[n].value.toLowerCase() === answer[i]) {

         points[k].innerHTML = "points: 2";
         points[k].style.color = "green";
         } else {
           points[k].innerHTML = "Point: 0";
             points[k].style.color = "red";
           dispay[j].innerHTML = answer[i];
           dispay[j].style.color = "blue";
       }

   }
}

// Calculate total score
    let expression = 0;
    let m;
      for(m = 0; m < points.length; m++) {
         if(points[m].innerHTML === "points: 2") {
            expression += 2;
         };
         document.getElementById("results").value = expression;
      }
 }

document.getElementById("submit").addEventListener("click", compareAnswers);



