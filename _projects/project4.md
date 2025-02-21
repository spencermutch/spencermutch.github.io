---
layout: page
title: Group Project 3
permalink: /projects/groupproject3/
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

**Created by:** Spencer Mutch, Hima Rajesh, and Kevin Hoang
<div>
  <h2><b>Group Project 3 - Physical Prototype:</b></h2>
<p>For this project we were tasked with creating a physical prototype that solves an everyday problem. We built these physical prototypes using an Arduino.
</p>
</div>
<h3><b>10 Initial Sketches:</b></h3>
<div class="swiper-wrapper-container">
  <div class="swiper-container">
    <div class="swiper-wrapper">
      <div class="swiper-slide">
        <a href="/assets/images/GP3/cs1.png" data-fancybox="gallery">
          <img src="/assets/images/GP3/cs1.png" alt="Photo 1">
        </a>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/GP3/cs2.png" data-fancybox="gallery">
          <img src="/assets/images/GP3/cs2.png" alt="Photo 2">
        </a>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/GP3/cs3.png" data-fancybox="gallery">
          <img src="/assets/images/GP3/cs3.png" alt="Photo 3">
        </a>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/GP3/cs4.png" data-fancybox="gallery">
          <img src="/assets/images/GP3/cs4.png" alt="Photo 3">
        </a>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/GP3/cs5.png" data-fancybox="gallery">
          <img src="/assets/images/GP3/cs5.png" alt="Photo 3">
        </a>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/GP3/cs6.png" data-fancybox="gallery">
          <img src="/assets/images/GP3/cs6.png" alt="Photo 3">
        </a>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/GP3/cs7.png" data-fancybox="gallery">
          <img src="/assets/images/GP3/cs7.png" alt="Photo 3">
        </a>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/GP3/cs8.png" data-fancybox="gallery">
          <img src="/assets/images/GP3/cs8.png" alt="Photo 3">
        </a>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/GP3/cs9.png" data-fancybox="gallery">
          <img src="/assets/images/GP3/cs9.png" alt="Photo 3">
        </a>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/GP3/cs10.png" data-fancybox="gallery">
          <img src="/assets/images/GP3/cs10.png" alt="Photo 3">
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
  <b>Initial Idea and Concept Selection:</b>
<p>
  From my initial sketches, I really liked the idea of the car that could carry drinks and drive them to you, however we felt that this didn't really solve a problem as it would most likely be easier to just grab the drink yourself. Some of the other sketches either seemed too simple, or too complex. Overall me and my group members thought that the tripwire idea was an interesting idea that could solve many everyday problems, such as deterring thieves or pests from valuable items. Because of the versatility of this idea, we decided to expand upon it. <br><br>
  </p>

<div class="content">
  <b>Problem</b>
<p>
  The problem we chose to solve was protecting crops and gardens from pests and animals. This decision was motivated by my groupmate Kevin’s personal experience of watching his grandfather try to protect his crops from crows. However our basic implementation is versatile and could be adapted to any scenario where you might want to protect something from pests.
  </p>

  <div class="content">
  <h2><b>Solution: Garden Warfare</b></h2>
<p>
  <p>
  <b><i>Garden Warfare</i></b> is a modernized scarecrow designed to protect crops, gardens, and other valuables by incorporating motion, lights, and sounds.<br><br>

  <b>Detection:</b> When the scarecrow is in its passive tracking state, it uses an ultrasonic sensor to detect the presence of animals or intruders that may be attempting to steal or destroy crops, and when the animal has come close enough to the crops it will enter attack mode. <br><br>

<b>Attack Mode:</b> In this state the scarecrow's eyes shine red and it waves its arms around to produce sound and movement to scare off the animal. When no animal is detected it once again enters its passive tracking state, where it waits until something is detected. <br><br>

To ensure that the user can still tend to their crops and otherwise use the space protected by the scarecrow, we’ve included a button that when pressed will toggle the scarecrow between its tracking state, and a stand-by state which disables tracking so that the user can use the space without the scarecrow entering its attack state.<br><br>

Our prototype provides an efficient, humane, automated way to protect crops and gardens, by blending the traditional scarecrow functionality with modern technology. 


  </p>
  <h3><b>Storyboard:</b></h3>
  
<div class="swiper-wrapper-container">
  <div class="swiper-container">
    <div class="swiper-wrapper">
      <div class="swiper-slide">
        <a href="/assets/images/GP3/sb1.png" data-fancybox="gallery">
          <img src="/assets/images/GP3/sb1.png" alt="Photo 1">
        </a>
        <div class="caption">Part 1 (Click on Image to Enlarge)</div>
      </div>
      <div class="swiper-slide">
        <a href="/assets/images/GP3/sb2.png" data-fancybox="gallery">
          <img src="/assets/images/GP3/sb2.png" alt="Photo 2">
        </a>
        <div class="caption">Part 2</div>
      </div>
    </div>
    <!-- Add Pagination -->
  </div>
  <!-- Add Navigation -->
  <div class="swiper-pagination"></div>
  <div class="swiper-button-next"></div>
  <div class="swiper-button-prev"></div>
</div>

<h3><b>Thoughts on the Project:</b></h3>
<p>
  <b>How the application fits the objective:</b><br>
The objective for this project was to create a physical prototype that solves an everyday problem while including at least one sensor based input, and one physical output. <br> As someone who likes to grow plants in the summer, this problem is something I’ve struggled to find a solution to. This problem also applies to farmers who need to protect their crops, as well as anyone who needs to protect their property from pests. <br><br> Our prototype solves this problem using an ultrasonic sensor as input and LED’s and motors as output, to create an effective solution that doesn’t harm the animals, crops, or prevent the user from using their space. 
<br><br>

<b>What worked:</b><br>
The design of our project worked really well. The ultrasonic sensor made detecting the presence of an animal simple and accurate, and we believe that the combination of lights, and movement, to simulate the presence of a human would be effective in a real world use case. <br><br>

As a group I feel that we collaborated efficiently by evenly distributing the workload and ensuring that each member worked on something that aligned with their strengths, while still giving everybody an opportunity to work on the areas they were unfamiliar with.
<br><br>

<b>What didn’t:</b><br>
We ran into a few problems due to the physical nature of this project. One of the problems we had was that only one Arduino unit was given for each group, which meant that working on it at home was challenging for the other members of the group that didn’t have the Arduino. We were able to bypass this problem by using a simulated Arduino so that everybody could work on the project on their own time, and once we finished, one group member implemented the work on the physical arduino.<br><br>

Another challenge was that during transport, it was easy for wires and components to fall out of the breadboard. This caused complications during our demo as one of the wires we used to connect the 9V battery to our board had fallen out, which caused our prototype to behave unexpectedly
<br><br>

<b>What I would change:</b><br>
Given another chance to work on this project I would have liked to flesh out the idea more and make use of more of the Arduino components. I also would have liked to create a larger scale prototype that instead of detecting small clay animals could have detected real people during our demo to add more interactivity to it.

</p>
<div>

<div>
  <h2><b>Video Demo:</b></h2>

  <iframe width="560" height="315" src="https://www.youtube.com/embed/NyC3iCy8-hU?si=xx-B5-R7lHgWWTSd" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>" 
  <p><a href="https://spencermutch.github.io/assets/downloads/sourcecode_gardenwarfare.ino" download>Source Code Download</a>
  <br>
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
