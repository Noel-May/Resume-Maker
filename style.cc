/* === GENERAL === */
* {margin:0; padding:0; box-sizing:border-box;}
body {font-family: 'Arial', sans-serif; background:#111; color:white; overflow-x:hidden;}

/* === LANDING PAGE === */
#landingPage {
  display:flex; flex-direction:column; justify-content:center; align-items:center; height:100vh;
  text-align:center; position:relative; overflow:hidden;
}
#landingPage h1, #landingPage p {animation:fadeIn 2s ease forwards;}
#landingPage #landingTitle {font-size:3rem; letter-spacing:3px; margin-bottom:1rem;}
#landingPage p {font-size:1.2rem; margin-bottom:2rem;}
#landingBtn, #startBtn {padding:1rem 2rem; font-size:1.2rem; border:none; border-radius:10px; background:white; color:#111; transition:0.3s;}
#startBtn:hover {transform:scale(1.2);}

.briefcase {
  position:absolute; top:10%; right:-50px;
  font-size:2rem; color:white;
  animation:moveBriefcase 5s linear infinite;
}

/* === Stars Background === */
.stars {
  position:absolute; width:2px; height:2px; background:white;
  animation:moveStars 10s linear infinite;
  top:calc(100%*var(--i)); left:calc(100%*var(--j));
}

/* === ANIMATIONS === */
@keyframes fadeIn {0%{opacity:0;}100%{opacity:1;}}
@keyframes moveBriefcase {0%{right:-50px;}50%{right:50%;}100%{right:-50px;}}
@keyframes moveStars {0%{transform:translateY(0);}100%{transform:translateY(-100vh);}}

/* === RESUME BUILDER === */
.container {display:flex; gap:2rem; padding:2rem;}
form {flex:1; background:#222; padding:2rem; border-radius:15px; display:grid; gap:1rem; box-shadow:0 0 15px rgba(255,255,255,0.2);}
form input, form textarea, form select {padding:0.7rem; border-radius:5px; border:none; background:#111; color:white;}
form label {color:#fff; font-weight:bold;}
#resumePreview {flex:1; background:#000; padding:2rem; border-radius:15px; overflow-y:auto; min-height:600px; animation:previewGlow 2s infinite alternate;}
#resumePreview h2, #resumePreview h3, #resumePreview p {margin-bottom:1rem;}

/* Skills badges */
#previewSkills span {display:inline-block; background:white; color:black; padding:0.3rem 0.6rem; border-radius:5px; margin:0.2rem; animation:badgeBounce 1s infinite alternate;}
@keyframes badgeBounce {0%{transform:translateY(0);}100%{transform:translateY(-5px);}}

/* Buttons */
#actions button {margin-top:1rem; padding:0.7rem 1.2rem; border:none; border-radius:10px; background:white; color:black; cursor:pointer; transition:0.3s;}
#actions button:hover {transform:scale(1.1);}

/* Template */
.template-white {background:#fff; color:#111; padding:1rem; border-radius:10px;}
.template-black {background:#111; color:#fff; padding:1rem; border-radius:10px; border:1px solid white;}

/* Preview Glow */
@keyframes previewGlow {0%{box-shadow:0 0 5px rgba(255,255,255,0.2);}100%{box-shadow:0 0 20px rgba(255,255,255,0.6);}}
