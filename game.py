import random

def choose_word():
    words = ["meghan"]
    return random.choice(words)

def play_game():
    word = choose_word()
    guessed_word = "_" * len(word)
    attempts = 6
    guessed_letters = []

    print("Welcome to the Word Guessing Game!")
    print("Guess the word. You have 6 attempts.")

    while attempts > 0:
        print("\nWord:", " ".join(guessed_word))
        guess = input("Guess a letter: ").lower()

        if guess in guessed_letters:
            print("You already guessed that letter. Try again.")
            continue

        guessed_letters.append(guess)

        if guess in word:
            print("Correct guess!")
            for i in range(len(word)):
                if word[i] == guess:
                    guessed_word = guessed_word[:i] + guess + guessed_word[i+1:]
        else:
            print("Incorrect guess.")
            attempts -= 1

        if guessed_word == word:
            print("\nCongratulations! You guessed the word:", word)
            break

        print("Attempts left:", attempts)

    if guessed_word != word:
        print("\nGame over! The word was:", word)

if __name__ == "__main__":
    play_game()
