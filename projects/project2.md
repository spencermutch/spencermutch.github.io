---
layout: page
title: Project 2
permalink: /projects/project2/
---
<!-- Swiper for photo sliding -->
<link rel="stylesheet" href="https://unpkg.com/swiper/swiper-bundle.min.css" />
<script src="https://unpkg.com/swiper/swiper-bundle.min.js"></script>
<!-- Fancybox CSS -->
<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/fancybox/3.5.7/jquery.fancybox.min.css" />
<!-- jQuery (required for Fancybox) -->
<script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>
<!-- Fancybox JS -->
<script src="https://cdnjs.cloudflare.com/ajax/libs/fancybox/3.5.7/jquery.fancybox.min.js"></script>

**Created by:** Spencer Mutch, Desmond, and Naheen
Test

<div class="swiper-container">
  <div class="swiper-wrapper">
    <div class="swiper-slide">
      <a href="/assets/images/drawing-refined.png" data-fancybox="gallery">
        <img src="/assets/images/drawing-refined.png" alt="Photo 1">
      </a>
      <div class="caption">Caption for Image 1</div>
    </div>
    <div class="swiper-slide">
      <a href="/assets/images/desmond.png" data-fancybox="gallery">
        <img src="/assets/images/desmond.png" alt="Photo 2">
      </a>
      <div class="caption">Caption for Image 2</div>
    </div>
    <div class="swiper-slide">
      <a href="/assets/images/Naheen.png" data-fancybox="gallery">
        <img src="/assets/images/Naheen.png" alt="Photo 3">
      </a>
      <div class="caption">Caption for Image 3</div>
    </div>
  </div>
  <!-- Add Pagination -->
  <div class="swiper-pagination"></div>
  <!-- Add Navigation -->
  <div class="swiper-button-next"></div>
  <div class="swiper-button-prev"></div>
</div>

<style>
  .swiper-container {
    width: 100%;
    height: 400px; /* Set desired height */
  }
  .swiper-wrapper {
    display: flex;
  }
  .swiper-slide {
    display: flex; /* Use flexbox for centering */
    justify-content: center; /* Center content */
    align-items: center; /* Center vertically */
  }
  .swiper-slide img {
  width: 100%;
  height: auto;  /* Allow height to adjust based on aspect ratio */
  max-height: 100%; /* Limit max height to slide height */
  object-fit: contain; /* Scale the image to fit within the slide */
  }
  .caption {
    text-align: center;
    font-size: 14px;
    padding: 8px;
    color: #555;
  }
  /* Adjust button styles */
  .swiper-button-next,
  .swiper-button-prev {
    color: #000;
    width: 30px;
    height: 30px;
    top: 50%;
    transform: translateY(-50%);
    z-index: 10; /* Ensure buttons are on top */
  }

  .swiper-button-next {
    right: 10px; /* Position next button */
  }

  .swiper-button-prev {
    left: 10px; /* Position prev button */
  }

  .swiper-pagination {
    bottom: 10px; /* Position pagination correctly */
    text-align: center; /* Center pagination indicators */
  }
</style>

<script>
  $(document).ready(function() {
    new Swiper('.swiper-container', {
      loop: true,
      centeredSlides: true,
      slidesPerView: 1, // Ensure only one image is visible
      spaceBetween: 0, // Remove space between slides
      navigation: {
        nextEl: '.swiper-button-next',
        prevEl: '.swiper-button-prev',
      },
      pagination: {
        el: '.swiper-pagination',
        clickable: true,
      },
      grabCursor: true, // Change cursor to grab
      keyboard: {
        enabled: true, // Enable keyboard navigation
        onlyInViewport: false,
      },
    });
    
    // Initialize Fancybox
    $('[data-fancybox="gallery"]').fancybox({
      loop: true,
      transitionEffect: "fade",
    });
  });
</script>
