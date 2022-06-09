const room = document.getElementById("roomId");
const username = document.getElementById("username");
const pass = document.getElementById("pass");

document.getElementById("room-post").addEventListener("submit", (e) => {
  e.preventDefault();

  window.location.href =
    window.location +
    "chat?room=" +　room.value;

    sessionStorage.setItem('roomId',room.value);
    sessionStorage.setItem('name',username.value);
});

