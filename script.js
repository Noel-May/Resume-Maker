const startBtn = document.getElementById('startBtn');
const landingPage = document.getElementById('landingPage');
const resumeBuilder = document.getElementById('resumeBuilder');


startBtn.addEventListener('click', () => {
landingPage.style.display = 'none';
resumeBuilder.style.display = 'block';
});
