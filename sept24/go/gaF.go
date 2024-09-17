
import ( "fmt"
)

func solve(){
  var n int 
  fmt.Scan(&n);

  arr := make([]int,n);
  var counter1 int = 0;


  for i:=0 ; i<n ;i++ {
    fmt.Scan(&arr[i]);
    if arr[i] ==1{
      counter1 =  counter1 + 1;
    }
  }


  ans := (counter1 + 2 -1)/2;

  ans += (n-counter1)

  fmt.Println(ans)


}

func gaf(){
  var t int
  fmt.Scan(&t);

  for i:=0 ;i<t;i++{
    solve();
  } 

  
}
