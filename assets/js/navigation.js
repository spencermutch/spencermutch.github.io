document.addEventListener("DOMContentLoaded", function() {
    // Find all navigation buttons
    const prevButton = document.querySelector('.prev-arrow');
    const nextButton = document.querySelector('.next-arrow');
  
    if (prevButton) {
      prevButton.addEventListener('click', function() {
        window.location.href = prevButton.getAttribute('data-link');
      });
    }
  
    if (nextButton) {
      nextButton.addEventListener('click', function() {
        window.location.href = nextButton.getAttribute('data-link');
      });
    }
  });