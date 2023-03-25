#define _CRT_SECURE_NO_WARNINGS
class Snake {
    constructor() {
        this.body = [
        { x: 3, y : 1 },
        { x: 2, y : 1 },
        { x: 1, y : 1 },
        ];
        this.direction = "right";
    }

    move() {
        const head = this.body[0];
        let newHead;
        switch (this.direction) {
        case "up":
            newHead = { x: head.x, y : head.y - 1 };
            break;
        case "down":
            newHead = { x: head.x, y : head.y + 1 };
            break;
        case "left":
            newHead = { x: head.x - 1, y : head.y };
            break;
        case "right":
            newHead = { x: head.x + 1, y : head.y };
            break;
        }
        this.body.unshift(newHead);
        this.body.pop();
    }

    changeDirection(newDirection) {
        if (
            (this.direction == = "up" && newDirection == = "down") ||
            (this.direction == = "down" && newDirection == = "up") ||
            (this.direction == = "left" && newDirection == = "right") ||
            (this.direction == = "right" && newDirection == = "left")
            ) {
            return;
        }
        this.direction = newDirection;
    }
}

const canvas = document.getElementById("canvas");
const ctx = canvas.getContext("2d");

const snake = new Snake();

function draw() {
    ctx.clearRect(0, 0, canvas.width, canvas.height);
    snake.move();
    snake.body.forEach((segment) = > {
        ctx.fillStyle = "green";
        ctx.fillRect(segment.x * 10, segment.y * 10, 10, 10);
    });
}

setInterval(draw, 100);

document.addEventListener("keydown", (event) = > {
    switch (event.key) {
    case "ArrowUp":
        snake.changeDirection("up");
        break;
    case "ArrowDown":
        snake.changeDirection("down");
        break;
    case "ArrowLeft":
        snake.changeDirection("left");
        break;
    case "ArrowRight":
        snake.changeDirection("right");
        break;
    }
});

