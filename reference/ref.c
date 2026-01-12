/* Trial 1
//  <!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <title>Happy Birthday 💕</title>

  <style>
    body {
      margin: 0;
      min-height: 100vh;
      background: linear-gradient(135deg, #ff9a9e, #fad0c4);
      display: flex;
      align-items: center;
      justify-content: center;
      font-family: 'Segoe UI', sans-serif;
      overflow-x: hidden;
    }

    .card {
      background: white;
      padding: 30px 35px;
      border-radius: 18px;
      text-align: center;
      max-width: 420px;
      box-shadow: 0 12px 30px rgba(0, 0, 0, 0.2);
      position: relative;
      animation: fadeIn 1.8s ease;
    }

    h1 {
      color: #ff5e78;
      margin-bottom: 10px;
    }

    p {
      color: #444;
      font-size: 1.1em;
      line-height: 1.6;
    }

    button {
      margin-top: 18px;
      padding: 10px 22px;
      border: none;
      border-radius: 20px;
      background: #ff5e78;
      color: white;
      font-size: 1em;
      cursor: pointer;
      transition: background 0.3s;
    }

    button:hover {
      background: #ff3f5e;
    }

    .hidden {
      display: none;
    }

    //Emoji decorations 
    .emoji {
      position: absolute;
      width: 40px;
      animation: float 6s infinite ease-in-out;
      opacity: 0.8;
    }

    .emoji.one { top: -20px; left: -20px; }
    .emoji.two { top: -20px; right: -20px; }
    .emoji.three { bottom: -20px; left: -20px; }
    .emoji.four { bottom: -20px; right: -20px; }

    @keyframes float {
      0% { transform: translateY(0); }
      50% { transform: translateY(-12px); }
      100% { transform: translateY(0); }
    }

    // Gallery 
    .gallery {
      margin-top: 20px;
    }

    .gallery img {
      width: 100%;
      max-height: 200px;
      object-fit: cover;
      border-radius: 12px;
      margin-top: 10px;
    }

    input[type="file"] {
      margin-top: 10px;
    }

    @keyframes fadeIn {
      from { opacity: 0; transform: translateY(20px); }
      to { opacity: 1; transform: translateY(0); }
    }
  </style>
</head>
<body>

  <div class="card">

    <!-- Love emoji images -->
    <img class="emoji one" src="https://twemoji.maxcdn.com/v/latest/72x72/1f497.png">
    <img class="emoji two" src="https://twemoji.maxcdn.com/v/latest/72x72/1f496.png">
    <img class="emoji three" src="https://twemoji.maxcdn.com/v/latest/72x72/1f49d.png">
    <img class="emoji four" src="https://twemoji.maxcdn.com/v/latest/72x72/1f498.png">

    <h1>Happy Birthday 🎂</h1>

    <p>
      I hope today brings you happiness, laughter,
      and everything that makes you smile.
      You’re genuinely special, and I’m really glad I know you.
    </p>

    <button onclick="revealSurprise()">Click for a surprise 💖</button>

    <div id="extraMessage" class="hidden">
      <p style="color:#ff5e78; font-weight:bold;">
        May this year be full of joy and beautiful moments ✨
      </p>
    </div>

    <!-- Image section (hidden until button click) -->
    <div id="gallerySection" class="gallery hidden">
      <p>Add your favorite photo 💕</p>
      <input type="file" accept="image/*" onchange="previewImage(event)">
      <img id="preview" class="hidden">
    </div>

  </div>

  <script>
    function revealSurprise() {
      document.getElementById("extraMessage").classList.remove("hidden");
      document.getElementById("gallerySection").classList.remove("hidden");
    }

    function previewImage(event) {
      const img = document.getElementById("preview");
      img.src = URL.createObjectURL(event.target.files[0]);
      img.classList.remove("hidden");
    }
  </script>

</body>
</html>





// trial 2



<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Happy Birthday, My Love!</title>
    <style>
        body {
            margin: 0;
            height: 100vh;
            display: flex;
            flex-direction: column;
            justify-content: center;
            align-items: center;
            background: linear-gradient(135deg, #ff9a9e, #fad0c4);
            font-family: 'Arial', sans-serif;
            overflow: hidden;
            position: relative;
        }

        .container {
            text-align: center;
            color: white;
            z-index: 10;
            max-width: 90%;
        }

        h1 {
            font-size: 4rem;
            margin-bottom: 20px;
            text-shadow: 2px 2px 10px rgba(0,0,0,0.3);
            animation: fadeIn 2s ease-in;
        }

        p {
            font-size: 1.8rem;
            line-height: 1.6;
            animation: fadeIn 3s ease-in;
        }

        .heart {
            font-size: 5rem;
            animation: pulse 1.5s infinite;
            margin: 30px 0;
        }

        .surprise-btn {
            margin-top: 40px;
            padding: 15px 40px;
            font-size: 1.5rem;
            background: #ff4757;
            color: white;
            border: none;
            border-radius: 50px;
            cursor: pointer;
            box-shadow: 0 8px 20px rgba(0,0,0,0.2);
            transition: all 0.3s;
        }

        .surprise-btn:hover {
            transform: scale(1.1);
            background: #ff3742;
        }

        .extra-message {
            font-size: 2rem;
            margin-top: 30px;
            opacity: 0;
            transition: opacity 2s ease-in;
        }

        .extra-message.show {
            opacity: 1;
        }

        // Surprise section: video + photos /
        .surprise-section {
            position: relative;
            margin: 50px 0;
            width: 100%;
            max-width: 1000px;
            opacity: 0;
            transition: opacity 2s ease-in-out;
        }

        .surprise-section.show {
            opacity: 1;
        }

        .background-video {
            position: absolute;
            top: 0;
            left: 0;
            width: 100%;
            height: 100%;
            object-fit: cover;
            border-radius: 20px;
            z-index: -1;
            opacity: 0.6;
        }

        .photo-gallery {
            display: flex;
            flex-wrap: wrap;
            justify-content: center;
            gap: 25px;
            padding: 40px 20px;
            background: rgba(255,255,255,0.1);
            border-radius: 20px;
            backdrop-filter: blur(10px);
        }

        .photo {
            width: 220px;
            height: 220px;
            object-fit: cover;
            border-radius: 20px;
            box-shadow: 0 10px 25px rgba(0,0,0,0.3);
            transition: transform 0.5s ease;
            border: 5px solid rgba(255,255,255,0.6);
        }

        .photo:hover {
            transform: scale(1.15) rotate(5deg);
        }

        @keyframes fadeIn {
            from { opacity: 0; transform: translateY(-50px); }
            to { opacity: 1; transform: translateY(0); }
        }

        @keyframes pulse {
            0% { transform: scale(1); }
            50% { transform: scale(1.2); }
            100% { transform: scale(1); }
        }

        /* Explosion effect /
        .explosion {
            position: absolute;
            font-size: 3rem;
            pointer-events: none;
            animation: explode 1.8s ease-out forwards;
        }

        @keyframes explode {
            0% { transform: scale(0) translateY(0); opacity: 1; }
            100% { transform: scale(2.5) translateY(-150px); opacity: 0; }
        }

        /* Floating hearts background /
        .floating-heart {
            position: absolute;
            font-size: 2rem;
            color: rgba(255, 255, 255, 0.8);
            animation: float 10s linear infinite;
            pointer-events: none;
        }

        @keyframes float {
            0% { transform: translateY(100vh) rotate(0deg); opacity: 0; }
            10% { opacity: 1; }
            90% { opacity: 1; }
            100% { transform: translateY(-100px) rotate(360deg); opacity: 0; }
        }
    </style>
</head>
<body>
    <div class="container">
        <h1>Happy Birthday, My Love! 🎉</h1>
        <div class="heart">❤️</div>
        <p>To the most beautiful woman in my world,<br>
        On this special day, I want you to know how deeply I love you.<br>
        You bring light into my life every single day, and I'm so grateful for you.<br>
        May your birthday be filled with joy, laughter, and all the happiness you deserve.<br>
        Here's to many more adventures together. I love you forever! 💕</p>

        <button class="surprise-btn">Click for a Surprise 💖</button>

        <div class="extra-message" id="extraMessage">
            You are my everything. Every moment with you feels like a dream.<br>
            Happy Birthday, my forever love! 🥰✨
        </div>

        <!-- Surprise section: Video background + Photos (revealed on click) -->
        <div class="surprise-section" id="surpriseSection">
            <video class="background-video" autoplay muted loop playsinline>
                <!-- Romantic falling hearts animation (royalty-free from Pixabay) -->
                <source src="https://cdn.pixabay.com/vids/2020-02-14-10-53-22-718_1080p.mp4" type="video/mp4">
                Your browser does not support the video tag.
            </video>

            <div class="photo-gallery" id="photoGallery">
                <!-- Replace these with your real photos -->
                <img src="https://via.placeholder.com/220?text=Her+Beautiful+Smile+1" alt="Memory 1" class="photo">
                <img src="https://via.placeholder.com/220?text=Our+Adventure+2" alt="Memory 2" class="photo">
                <img src="https://via.placeholder.com/220?text=You+Are+Perfect+3" alt="Memory 3" class="photo">
                <img src="https://via.placeholder.com/220?text=Forever+Together+4" alt="Memory 4" class="photo">
                <img src="https://via.placeholder.com/220?text=My+Love+5" alt="Memory 5" class="photo">
                <img src="https://via.placeholder.com/220?text=Happy+Moments+6" alt="Memory 6" class="photo">
                <!-- Add more as needed -->
            </div>
        </div>
    </div>

    <script>
        // Floating hearts background
        function createFloatingHeart() {
            const emojis = ['❤️', '💕', '💖', '💗', '💘', '✨', '🌸', '🌹', '🥰', '😘'];
            const heart = document.createElement('div');
            heart.classList.add('floating-heart');
            heart.innerHTML = emojis[Math.floor(Math.random() * emojis.length)];
            heart.style.left = Math.random() * 100 + 'vw';
            heart.style.animationDuration = (Math.random() * 6 + 8) + 's';
            document.body.appendChild(heart);

            setTimeout(() => heart.remove(), 16000);
        }

        setInterval(createFloatingHeart, 600);
        for (let i = 0; i < 12; i++) {
            setTimeout(createFloatingHeart, i * 400);
        }

        // Surprise button action
        document.querySelector('.surprise-btn').addEventListener('click', function() {
            const btn = this;
            const emojis = ['❤️', '💕', '💖', '💘', '🌹', '✨', '🥰', '😘', '💋', '🌸', '🎂', '🎈', '💝'];

            // Exploding emojis
            for (let i = 0; i < 40; i++) {
                const explosion = document.createElement('div');
                explosion.classList.add('explosion');
                explosion.innerHTML = emojis[Math.floor(Math.random() * emojis.length)];

                const rect = btn.getBoundingClientRect();
                explosion.style.left = rect.left + rect.width / 2 + (Math.random() - 0.5) * 300 + 'px';
                explosion.style.top = rect.top + rect.height / 2 + 'px';

                document.body.appendChild(explosion);
                setTimeout(() => explosion.remove(), 2000);
            }

            // Reveal everything
            document.getElementById('extraMessage').classList.add('show');
            document.getElementById('surpriseSection').classList.add('show');

            // Update button
            this.textContent = "Surprise Revealed! 🥰";
            this.disabled = true;
            this.style.background = '#ff6b81';
        });
    </script>
</body>
</html>

*/

  