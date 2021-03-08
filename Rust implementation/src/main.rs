extern crate rand;
use rand::Rng;

const ARRAY_LENGHT: usize = 500000;
const MAX_RANDOM: i32 = 100000;
const MIN_RANDOM: i32 = 1;

fn linear_search(value: i32, array: [i32; ARRAY_LENGHT]) -> bool {
    let mut found = false;
    let mut index: usize = 0;
    while index < ARRAY_LENGHT {
        if array[index] == value{
            found = true;
            break;
        }
        index = index + 1;
    }
    return found;
}

fn main(){
    let array: [i32; ARRAY_LENGHT] = [rand::thread_rng().gen_range(MIN_RANDOM,MAX_RANDOM); ARRAY_LENGHT];

    if linear_search(200000,array) {
        println!("Value was found :)");
    } else {
        println!("Value was not found :(");
    }
}