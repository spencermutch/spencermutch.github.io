---
layout: page
title: Project 2
permalink: /projects/project2/
classes: wide
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
<div class="content">
Our phone unlock system, which we call AngleGuard, utilizes Augmented Reality (AR) to create a unique and secure way to protect your device. To unlock the phone, users must enter AR mode, place a virtual object and view it from a precise distance, orientation and angle.
This method ensures that accidental unlocks are prevented by requiring real-world surface detection, which only activates when a flat surface, like a floor or table, is recognized. It also requires a two-step interaction: Placing the AR object, and viewing it from a unique distance and angle.
With the ability to set multiple angles, distances, heights, and phone orientations as a personalized password, this system offers exceptional security strength while maintaining a small margin of error.
</div>

<div class="swiper-wrapper-container">
  <div class="swiper-container">
    <div class="swiper-wrapper">
      <div class="swiper-slide">
        <a href="/assets/images/desmond.png" data-fancybox="gallery">
          <img src="/assets/images/drawing-refined.png" alt="Photo 1">
        </a>
        <div class="caption">The is one of my refined sketches for the project, showing how you can unlock the device using the correct orientation, as well as a hand-tracking addition that could be made to the system.</div>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/desmond.png" data-fancybox="gallery">
          <img src="/assets/images/desmond.png" alt="Photo 2">
        </a>
        <div class="caption">These are some refined sketches made by Desmond, and show the basic idea of our system with various additions, such as multiple orientations, a timer, etc.</div>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/Naheen.png" data-fancybox="gallery">
          <img src="/assets/images/Naheen.png" alt="Photo 3">
        </a>
        <div class="caption">This is a refined sketch made by Naheen, that show how we could place the object, as well as a hand-tracking addition, and a way to provide feedback to the user by making the object glow a certain colour when you look at correctly or incorrectly.</div>
      </div>
    </div>
    <!-- Add Pagination -->
    <div class="swiper-pagination"></div>
    <!-- Add Navigation -->
    <div class="swiper-button-next"></div>
    <div class="swiper-button-prev"></div>
  </div>
</div>

<style>
  .content {
    margin-bottom: 40px;
  }
  
  .swiper-wrapper-container {
    display: flex;
    justify-content: center; /* Center horizontally */
    width: 100%; /* Make it full width */
  }
  .swiper-container {
    width: 500px;
    height: 600px; /* Set desired height */
    margin: 20px 0;
    position: relative;
  }
  .swiper-wrapper {
    display: flex;
  }
  .swiper-slide {
    display: flex; /* Use flexbox for centering */
    flex-direction: column;
    justify-content: center; /* Center content */
    align-items: center; /* Center vertically */
    height: 100%;
  }
  .swiper-slide a {
    display: flex;
    justify-content: center;
    align-items: center;
    width: 100%;
    object-fit: contain;
    height: auto;
    max-height: 100%; /* Prevent overflow */
  }
  .swiper-slide img {
    width: 100%; /* Ensure images take full width */
    height: auto;
    max-height: 100%; /* Prevent overflow */
    object-fit: contain; /* Keep aspect ratio */
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
    position: absolute;
  }

  .swiper-button-next {
    right: -50px; /* Position next button */
  }

  .swiper-button-prev {
    left: -50px; /* Position prev button */
  }

  .swiper-pagination {
    bottom: -70px; /* Position pagination correctly */
    text-align: center; /* Center pagination indicators */
    position: absolute;
    left: 0;
    right: 0;
  }
</style>

<script>
  $(document).ready(function() {
    new Swiper('.swiper-container', {
      loop: true,
      centeredSlides: true,
      slidesPerView: 1, // Ensure only one image is visible
      spaceBetween: 800, // Remove space between slides
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
      loop: true,
      transitionEffect: "fade",
    });
  });
</script>
