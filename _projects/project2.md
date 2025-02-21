---
layout: page
title: CPSC Group Project 2
permalink: /projects/groupproject2/
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
<div>
  <h1><b>Phone Sensor Unlock Project:</b></h1>
<p>
  Our phone unlock system, which we call AngleGuard, utilizes Augmented Reality (AR) to create a unique and secure way to protect your device. To unlock the phone, users must enter AR mode, place a virtual object and view it from a precise distance, orientation and angle.<br>
This method ensures that accidental unlocks are prevented by requiring real-world surface detection, which only activates when a flat surface, like a floor or table, is recognized. It also requires a two-step interaction: Placing the AR object, and viewing it from a unique distance and angle.<br>
With the ability to set multiple angles, distances, heights, and phone orientations as a personalized password, this system offers exceptional security strength while maintaining a small margin of error.<br><br>
<b>10 Initial Sketches:</b>
</p>
</div>

<div class="swiper-wrapper-container">
  <div class="swiper-container">
    <div class="swiper-wrapper">
      <div class="swiper-slide">
        <a href="/assets/images/cs1.jpg" data-fancybox="gallery">
          <img src="/assets/images/cs1.jpg" alt="Photo 1">
        </a>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/cs2.jpg" data-fancybox="gallery">
          <img src="/assets/images/cs2.jpg" alt="Photo 2">
        </a>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/cs3.jpg" data-fancybox="gallery">
          <img src="/assets/images/cs3.jpg" alt="Photo 3">
        </a>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/cs4.jpg" data-fancybox="gallery">
          <img src="/assets/images/cs4.jpg" alt="Photo 3">
        </a>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/cs5.jpg" data-fancybox="gallery">
          <img src="/assets/images/cs5.jpg" alt="Photo 3">
        </a>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/cs6.jpg" data-fancybox="gallery">
          <img src="/assets/images/cs6.jpg" alt="Photo 3">
        </a>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/cs7.jpg" data-fancybox="gallery">
          <img src="/assets/images/cs7.jpg" alt="Photo 3">
        </a>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/cs8.jpg" data-fancybox="gallery">
          <img src="/assets/images/cs8.jpg" alt="Photo 3">
        </a>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/cs9.jpg" data-fancybox="gallery">
          <img src="/assets/images/cs9.jpg" alt="Photo 3">
        </a>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/cs10.jpg" data-fancybox="gallery">
          <img src="/assets/images/cs10.jpg" alt="Photo 3">
        </a>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/desmond-concept.PNG" data-fancybox="gallery">
          <img src="/assets/images/desmond-concept.PNG" alt="Photo 3">
        </a>
      </div>
    </div>
    <!-- Add Pagination -->
    <div class="swiper-pagination"></div>

  </div>
    <!-- Add Navigation -->
  <div class="swiper-button-next"></div>
  <div class="swiper-button-prev"></div>
</div>

<div class="content">
  <b>We have lots of good ideas... But which one should we choose?</b>
<p>
  From our initial sketches, our team looked into various unlock mechanisms, including AR, hand tracking, and device movement. Ultimately, we found the AR "Dance to Unlock" concept was a unique and interesting idea, but we wanted to ensure   it was doable before we started our refined sketches. Our research on different AR platforms revealed a major challenge: foot detection with an AR object (in this case, a dance pad), as most platforms at best support hand detection. We     would also need to utilize depth tracking of some sort since we wanted to have the dance pad appear underneath our feet, whereas most objects in AR space are simply superimposed on top of the real world. <br><br>
  </p>

  <p>
  I suggested we could use our hands to push the pads instead of using our feet, but as a group we felt that this would too closely resemble a standard keypad, just with extra complexity and steps. Terrence suggested we could take pictures of our hands and tape it on top of our shoes as an attempt to make use of hand detection. However, we ultimately recognized that with less than two weeks to learn an AR framework, develop, and test, this idea might be too complex, so we returned to our initial sketches to explore other options. Our group remained interested in using AR in some capacity so we focused on ideas including AR or those that could be translated to AR. The “View to Unlock” idea, an initial sketch made by Desmond, stood out as an idea we all believed was feasible, while still being unique and interesting, and presenting us with a challenge.
  </p>
  <h3><b>Refined Sketches:</b></h3>
  
  <div class="swiper-wrapper-container">
  <div class="swiper-container">
    <div class="swiper-wrapper">
      <div class="swiper-slide">
        <a href="/assets/images/drawing-refined.png" data-fancybox="gallery">
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
    
  </div>
  <!-- Add Navigation -->
  <div class="swiper-button-next"></div>
  <div class="swiper-button-prev"></div>
</div>

</div>
<h3><b>Thoughts on the Project:</b></h3>
<p>
  <b>How the application fits the objective:</b><br>
The objective for this project was to create a sensor-based interface for a mobile phone that is an alternative to typical unlocks. Our final product aligns with this objective by leveraging multiple phone sensors to create an unlock system that is very unique to any existing methods.<br><br>

<b>How we worked as a team:</b><br>
Each team member contributed concept sketches, which we then reviewed as a group. Together we discussed which ideas we liked, and the challenges of them. As a group, we decided that AR would be unique and interesting and decided to pursue using that technology. Throughout the project we met up to discuss, and test our project, as well as made frequent online contact to ensure that all of us knew what we should be working on, and if there were any problems.<br><br>

<b>What worked:</b><br>
The effectiveness of using a specific location respective to an AR object surpassed our expectations as a security method. We have found that the password is very difficult to guess, and reliably unlocks when you are in the correct position.<br><br>

<b>What didn’t:</b><br>
While our unlock method works reliably, we found that sometimes it can be challenging to remember the exact spot in a 3D space that is required to unlock the phone. This led us to slightly increasing the margin of error for unlocking the phone, and we believe we have found a good balance between security and usability.<br><br>

<b>What we would change:</b><br>
Given more time we would’ve liked to add a level of customizability to the project, such as allowing the user to pick from certain models to use as their AR object. We also would have considered some accessibility options, as this method requires the user to be able to move around a relatively open space, which may not be possible in some situations.

</p>
<div>

<div>
<h2><b>Our Final Product, AngleGuard:</b></h2>
</div>

<div class="swiper-wrapper-container">
  <div class="swiper-container3">
    <div class="swiper-wrapper">
      <div class="swiper-slide">
        <a href="/assets/images/Refined_d1finished.png" data-fancybox="gallery">
          <img src="/assets/images/Refined_d1finished.png" alt="Photo 1">
        </a>
        <div class="caption">A rotoscope I created that shows how AngleGuard works.</div>
      </div>
    </div>
  </div>
</div>

<div>
  <h2><b>Video Demo:</b></h2>

  <iframe width="560" height="315" src="https://www.youtube.com/embed/5v3-5mwG3Vc?si=nY-shQ7dkPxMsVkZ" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>" 
  <p><a href="https://glitch.com/edit/#!/project-2---angleguard">Source Code</a>
  <br>
  <a href="https://project-2---angleguard.glitch.me">Try AngleGuard</a>
  </p>
</div>

<style>
  .content {
    margin-bottom: 40px;
  }
  
  .swiper-wrapper-container {
    display: flex;
    justify-content: center; /* Center horizontally */
    overflow: visible;
    position: relative;
  }
  .swiper-container {
    width: 70%;
    height: 500px; /* Set desired height */
    position: relative;
    overflow: hidden;
  }
  .swiper-wrapper {
    display: relative; /* was flex*/
  }
  .swiper-slide {
    display: flex; /* Use flexbox for centering */
    flex-direction: column;
    justify-content: center; /* Center content */
    align-items: center; /* Center vertically */
    height: 100%;
  }

  .swiper-slide img {
    width: 100%; /* Ensure images take full width */
    height: auto;
    max-height: 100%; /* Prevent overflow */
    object-fit: contain; /* Keep aspect ratio */
  }
  .caption {
    position: absolute;
    bottom: 0; /* Position it at the bottom of the image */
    width: 100%;
    padding: 10px;
    background-color: rgba(0, 0, 0, 0.5); /* Semi-transparent background */
    color: #fff;
    text-align: center;
    font-size: 14px;
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
    right: 10px; /* Position next button */
  }

  .swiper-button-prev {
    left: 10px; /* Position prev button */
  }

  .swiper-pagination {
    position: absolute;
    text-align: center; /* Center pagination indicators */

  }

  .img {
    height: 400px;
    width: 200px;
  }
</style>

<script>
  $(document).ready(function() {
    new Swiper('.swiper-container', {
      loop: true,
      centeredSlides: true,
      slidesPerView: 1, // Ensure only one image is visible
      spaceBetween: 80, // Remove space between slides
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
