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
      <img src="/assets/images/desmond.png" alt="Photo 2">
      <div class="caption">Caption for Image 2</div>
    </div>
    <div class="swiper-slide">
      <img src="/assets/images/Naheen.png" alt="Photo 3">
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
  .swiper-button-next,
  .swiper-button-prev {
    color: #fff; /* Change arrow color */
    width: 30px; /* Set width for arrows */
    height: 30px; /* Set height for arrows */
    top: 50%; /* Center vertically */
    transform: translateY(-50%); /* Adjust position */
  }
  .swiper-button-next {
    right: 10px; /* Adjust distance from the right edge */
  }
  .swiper-button-prev {
    left: 10px; /* Adjust distance from the left edge */
  }
</style>

<script>
  $(document).ready(function() {
    // Swiper
    new Swiper('.swiper-container', {
      loop: true,
      centeredSlides: true,
      slidesPerView: 1,
      navigation: {
        nextEl: '.swiper-button-next',
        prevEl: '.swiper-button-prev',
      },
      pagination: {
        el: '.swiper-pagination',
        clickable: true,
      },
    });
    
    // Initialize Fancybox
    $('[data-fancybox="gallery"]').fancybox({
      // Optional settings for Fancybox
      loop: true, // Allow cycling through images
      transitionEffect: "fade", // Transition effect
      // Add more options as needed
    });
  });
</script>
