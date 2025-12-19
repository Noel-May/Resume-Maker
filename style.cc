/* === General Reset === */
* {margin:0; padding:0; box-sizing:border-box;}
body {font-family: 'Arial', sans-serif; background: linear-gradient(135deg, #f0f0f0, #dcdcdc); color: #111;}
button {cursor:pointer;}

/* === Landing Page === */
#landingPage {display:flex; flex-direction:column; justify-content:center; align-items:center; height:100vh; text-align:center; background: linear-gradient(120deg, #4A90E2, #9013FE);}
#landingPage h1 {font-size:3rem; color:white; margin-bottom:1rem;}
#landingPage p {font-size:1.2rem; color:white; margin-bottom:2rem;}
#startBtn {padding:1rem 2rem; font-size:1.2rem; border:none; border-radius:10px; background:white; color:#4A90E2; transition:0.3s;}
#startBtn:hover {transform:scale(1.1);}

/* === Form Section === */
#resumeBuilder {display:none; padding:2rem; max-width:1200px; margin:0 auto;}
form {display:grid; gap:1rem; background:white; padding:2rem; border-radius:15px; box-shadow:0 5px 15px rgba(0,0,0,0.2);}
form label {font-weight:bold; margin-bottom:0.3rem;}
form input, form textarea, form select {padding:0.7rem; border:1px solid #ccc; border-radius:5px; width:100%; font-size:1rem;}
form textarea {resize:none;}
.form-section {display:grid; gap:0.5rem;}

/* === Template Selector === */
#templateSelect {margin-top:1rem; padding:0.7rem; border-radius:5px; border:1px solid #ccc; font-size:1rem;}

/* === Resume Preview === */
#resumePreview {margin-top:2rem; padding:2rem; border-radius:15px; min-height:500px; overflow:hidden; transition:0.3s;}
.resume-section {margin-bottom:1rem;}
.section-title {font-size:1.5rem; font-weight:bold; margin-bottom:0.3rem; border-bottom:2px solid #ccc; display:inline-block;}
.info-text {font-size:1rem; margin-left:0.5rem;}
.skills-badge {display:inline-block; background:#4A90E2; color:white; padding:0.3rem 0.6rem; border-radius:5px; margin:0.2rem; font-size:0.9rem; transition:0.3s;}
.skills-badge:hover {transform:scale(1.1);}

/* === Buttons for Export === */
#actions {margin-top:1.5rem; display:flex; gap:1rem; flex-wrap:wrap;}
#actions button {padding:0.7rem 1.2rem; border:none; border-radius:10px; background:#4A90E2; color:white; font-size:1rem; transition:0.3s;}
#actions button:hover {transform:scale(1.05);}

/* === Templates Colors === */
.template-white {background:white; color:#111;}
.template-blue {background:#4A90E2; color:white;}
.template-gold {background:#FFD700; color:#111;}

/* === Print Friendly for PDF === */
@media print {
  body {background:white;}
  #resumePreview {width:210mm; min-height:297mm; padding:20mm; overflow:visible;}
  .skills-badge {animation:none;}
}
