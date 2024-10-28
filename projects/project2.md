---
layout: page
title: Project 2
permalink: /projects/project2/
---
<link rel="stylesheet" href="https://unpkg.com/swiper/swiper-bundle.min.css" />
<script src="https://unpkg.com/swiper/swiper-bundle.min.js"></script>
**Created by:** Spencer Mutch, Desmond, and Naheen

<div class="swiper-container">
  <div class="swiper-wrapper">
    <div class="swiper-slide">
      <img src="/assets/images/drawing-refined.png" alt="Photo 1">
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

<script>
  document.addEventListener("DOMContentLoaded", function() {
    new Swiper('.swiper-container', {
      loop: true,
      navigation: {
        nextEl: '.swiper-button-next',
        prevEl: '.swiper-button-prev',
      },
      pagination: {
        el: '.swiper-pagination',
        clickable: true,
      },
    });
  });
</script>
