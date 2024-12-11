---
layout: page
title: Projects
permalink: /projects/
---

Here are some of the projects I've worked on:

<ul>
    {% for project in site.projects %}
        <li>
            <a href="{{ project.url }}">{{ project.title }}</a>
        </li>
    {% else %}
        <li>No projects found</li>
    {% endfor %}
</ul>

