package main
import (
    "container/list"
    "fmt"
)

// Function to rearrange odd and even indexed nodes
func oddEvenList(l *list.List) *list.List {
    if l.Len() == 0 || l.Len() == 1 {
        return l
    }

    odd := l.Front()
    even := odd.Next()
    evenHead := even

    // Rearranging odd and even nodes
    for even != nil && even.Next() != nil {
        odd.Next().Value = even.Next().Value // Link current odd to the next odd
        odd = odd.Next()                     // Move to the next odd node
        even.Next().Value = odd.Next().Value // Link current even to the next even
        even = even.Next()                   // Move to the next even node
    }

    odd.Next().Value = evenHead.Value // Connect the end of the odd list to the head of the even list
    return l
}

// Helper function to print the linked list
func printList(l *list.List) {
    for e := l.Front(); e != nil; e = e.Next() {
        fmt.Print(e.Value)
        if e.Next() != nil {
            fmt.Print(" -> ")
        }
    }
    fmt.Println()
}

// Example usage
func main() {
    l := list.New()

    // Create linked list from array
    arr := []int{1, 2, 3, 4, 5}
    for _, val := range arr {
        l.PushBack(val)
    }

    fmt.Println("Original list:")
    printList(l)

    l = oddEvenList(l)
    fmt.Println("List after rearranging odd and even:")
    printList(l)
}

