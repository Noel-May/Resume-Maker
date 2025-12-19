// === Elements ===
const landingPage = document.getElementById('landingPage');
const startBtn = document.getElementById('startBtn');
const resumeBuilder = document.getElementById('resumeBuilder');
const resumeForm = document.getElementById('resumeForm');
const templateSelect = document.getElementById('templateSelect');
const resumePreview = document.getElementById('resumePreview');

const previewFullName = document.getElementById('previewFullName');
const previewJobTitle = document.getElementById('previewJobTitle');
const previewSummary = document.getElementById('previewSummary');
const previewSkills = document.getElementById('previewSkills');
const previewEducation = document.getElementById('previewEducation');
const previewCertificates = document.getElementById('previewCertificates');
const previewLanguages = document.getElementById('previewLanguages');
const previewJobMatch = document.getElementById('previewJobMatch');

const matchJobBtn = document.getElementById('matchJob');
const exportPDFBtn = document.getElementById('exportPDF');
const exportWordBtn = document.getElementById('exportWord');

// === Landing Page ===
startBtn.addEventListener('click', () => {
  landingPage.style.display = 'none';
  resumeBuilder.style.display = 'block';
});

// === Live Preview Function ===
resumeForm.addEventListener('input', () => {
  previewFullName.textContent = document.getElementById('fullName').value;
  previewJobTitle.textContent = document.getElementById('jobTitle').value;
  previewSummary.textContent = document.getElementById('summary').value;

  // Skills as badges
  previewSkills.innerHTML = '';
  const skillsArray = document.getElementById('skills').value.split(',');
  skillsArray.forEach(skill => {
    if(skill.trim()!=='') {
      const span = document.createElement('span');
      span.className = 'skills-badge';
      span.textContent = skill.trim();
      previewSkills.appendChild(span);
    }
  });

  previewEducation.textContent = document.getElementById('education').value;
  previewCertificates.textContent = document.getElementById('certificates').value;
  previewLanguages.textContent = document.getElementById('languages').value;
});

// === Template Change ===
templateSelect.addEventListener('change', () => {
  resumePreview.className = '';
  resumePreview.classList.add(`template-${templateSelect.value}`);
});

// === Job Match Function ===
matchJobBtn.addEventListener('click', () => {
  const skills = document.getElementById('skills').value.toLowerCase().split(',');
  const jobDesc = document.getElementById('jobDesc').value.toLowerCase();
  let matchCount = 0;
  skills.forEach(skill => { if(jobDesc.includes(skill.trim())) matchCount++; });
  const matchPercent = skills.length ? Math.round((matchCount/skills.length)*100) : 0;
  previewJobMatch.textContent = matchPercent + '%';
  alert(`Job Match Score: ${matchPercent}%`);
});

// === PDF Export ===
exportPDFBtn.addEventListener('click', () => {
  html2canvas(resumePreview, {scale:2}).then(canvas=>{
    const imgData = canvas.toDataURL('image/png');
    const pdf = new jspdf.jsPDF('p','mm','a4');
    const pdfWidth = 210;
    const pdfHeight = (canvas.height * pdfWidth) / canvas.width;
    pdf.addImage(imgData,'PNG',0,0,pdfWidth,pdfHeight);
    pdf.save('resume.pdf');
  });
});

// === Word Export ===
exportWordBtn.addEventListener('click', () => {
  let content = `
  <html>
    <head>
      <style>
        body {font-family: Arial, sans-serif; padding:20px;}
        h2 {color:#4A90E2; border-bottom:1px solid #ccc;}
        .section {margin-bottom:15px;}
      </style>
    </head>
    <body>
      <h1>${document.getElementById('fullName').value}</h1>
      <h2>Job Title</h2><p>${document.getElementById('jobTitle').value}</p>
      <h2>Professional Summary</h2><p>${document.getElementById('summary').value}</p>
      <h2>Skills</h2><p>${document.getElementById('skills').value}</p>
      <h2>Education</h2><p>${document.getElementById('education').value}</p>
      <h2>Certificates</h2><p>${document.getElementById('certificates').value}</p>
      <h2>Languages</h2><p>${document.getElementById('languages').value}</p>
    </body>
  </html>`;
  const blob = new Blob(['\ufeff', content], {type:'application/msword'});
  saveAs(blob, 'resume.doc');
});
