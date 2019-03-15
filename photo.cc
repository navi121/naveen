
html, body {
  min-height: 100%;
  display: flex;
  flex-direction: column;
  font-weight: 300;
  line-height: 1.5;
}

body {
  font-family: 'Lato', sans-serif;
  background-image: url('https://s3.amazonaws.com/codecademy-content/projects/make-a-website/lesson-3/background.jpg');
  background-position: center top;
  background-size: cover;
  margin: 0;
}

.page-title {
  text-align: center;
  font-weight: 100;
}

.page-description {
  padding:30px;
  border: 1px solid #000;
  text-align: center;
}

.gallery {
  margin-top:20px;
  display: flex;
  flex-wrap: wrap;
  justify-content: center;
}

.gallery-item {
  margin: 20px;
  border: 5px solid #FFF;
}

.gallery-item .thumbnail {

}

/* FOOTER NAVIGATION */

nav {
  background-color: #FFF;
}

nav li {
  margin: 0;
  padding: 0 10px;
}

nav ul {
  display: inline;
}

.contact-btn {

}

.contact-btn a {
  margin-right: 30px;
  padding: 8px 18px;
  border: 1px solid #204156;

}

.contact-btn a:active {
  position: relative;
  bottom: 2px;
}

nav a {
  height: 60px;
  line-height: 60px;
  color: #204156;
  text-decoration: none;
}

