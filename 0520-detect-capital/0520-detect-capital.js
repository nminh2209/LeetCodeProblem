/**
 * @param {string} word
 * @return {boolean}
 */
var detectCapitalUse = function(word) {
    // count how many uppercase letters are in the word
    let upperCount = 0;

    for (let i = 0; i < word.length; i++) {
        if (word[i] >= 'A' && word[i] <= 'Z') {
            upperCount++;
        }
    }

    
    if (
        upperCount === word.length ||
        upperCount === 0 ||
        (upperCount === 1 && word[0] >= 'A' && word[0] <= 'Z')
    ) {
        return true;
    }
    return false;
};

console.log(detectCapitalUse("USA"));     // true
console.log(detectCapitalUse("leetcode")); // true
console.log(detectCapitalUse("Google"));   // true
console.log(detectCapitalUse("FlaG"));     // false
