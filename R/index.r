# a = "mobile"
# num1 = 3
# log1 = TRUE
# comp = 1+6i
# b = 1
# b<-1

# print(a)
# print(b)
# print(comp)
# print(log1)
# print(num1)

# print(class(comp))



# a = 1
# b <- 4
# 10 -> g
# print(a)
# print(b)
# print(g)




# num1 = 10
# num2 = 20

# print(num1+num2)
# print(num1-num2)
# print(num1*num2)
# print(num1/num2)
# print(num1>num2)








#vector

# vec1 = c(1,2,3)
# vec2 = c("a","b","c")
# vec3 = c(T,F,T)
# print(vec1)
# print(vec2)
# print(vec3)
# print(class(vec1))
# print(class(vec2))
# print(class(vec3))

# mixbag1 = c(1,T,2,F)
# print(mixbag1)
# print(class(mixbag1))

# mixbag2 = c(1,"a",2,"b")
# print(mixbag2)
# print(class(mixbag2))

# print(mixbag2[2])








#list

# l1 = list(1,"a", TRUE, FALSE, "b")
# print(l1)
# print(class(l1[[1]]))


# l2 = list(c(1,2,3),c("a","b","c"),c(T,F,T))
# print(l2)
# print(l2[[2]][2])









#matrix

# m1 = matrix(c(1,2,3,4,5,6),nrow=2,byrow=T)
# print(m1)
# print(m1[1,2])
# print(m1[2,3])








#array

# vec1 = c(1,2,3,4,5,6)
# vec2 = c(7,8,9,10,11,12)
# a1=array(c(vec1,vec2),dim = c(2,3,2))
# print(a1)

# print(a1[1,3,2])
# print(a1[2,3,1])









#factor

# color1 = c("green", "red", "blue")
# print(color1)
# color1 = as.factor(color1)
# print(color1)







#dataframe

# fruits = data.frame(fruit_name=c("Apple","Banana","Guava"),fruit_cost = c(10,20,30))
# print(fruits)
# print(fruits$fruit_cost)
# print(fruits$fruit_name)














# Functions in R
# str(iris)
# head(iris,10)
# tail(iris)
# table(iris$Species)
# min(iris$Sepal.Length)
# max(iris$Sepal.Length)
# mean(iris$Sepal.Length)
# range(iris$Sepal.Length)



# condition statements

# print(iris$Sepal.Length[1])
# if (iris$Sepal.Length[1]<4) {
#     print("Sepal length is greater than 4")
# }else{
#     print("Sepal length is greater than 4")
# }

# vec1 = 1:9
# for (i in vec1) {
#    print(i+5)
# }


# i = 1
# while(i<10){
#     print(i+5)
#     i=i+1
# }

# add5 = function(x){
#     print(x+5)
# }

# print(add5(100))





























# Q1

# vec1 = c(1,2,3)
# vec2 = c("a","b","c")

# lst = list(vec1,vec2)
# print(lst)

# print(length(lst))
# print(vec1[1])
# print(vec2[1])



# Q2

# m = matrix(c(1,2,3,4,5,6,7,8,9),nrow = 3, ncol= 3, byrow=T)
# m=matrix(1:9,3,3)

# df = data.frame(fruit_name=c("Apple","Banana","Kiwi"),fruit_price = c(10,20,30))
# lst = list(m,df)
# print(lst)
# print(df)
# print(m)

# print(m[2,])
# print(df[,1])





# Q3
# v <- c(1,2,3)
# m <- matrix(1:4,2,2)
# df <- data.frame(a=1:3,b=4:6)
# lst <- list(v,m,df)
# str(lst)
# class(lst[[1]]); length(lst[[1]])
# class(lst[[2]]); length(lst[[2]])
# class(lst[[3]]); length(lst[[3]])




# Q4
# v1 <- c(1, 2, 3)
# v2 <- c(4, 5, 6)

# cat("=== cbind() — combines as COLUMNS ===\n")
# print(cbind(v1, v2))

# cat("\n=== rbind() — combines as ROWS ===\n")
# print(rbind(v1, v2))



# Q5
# Manual factor
# manual_factor <- factor(c("Low","Medium","High","Low","High"),
#                         levels = c("Low","Medium","High"))
# cat("Manual factor:\n")
# print(manual_factor)
# cat("Levels:", levels(manual_factor), "\n")

# # gl() generated factor
# gl_factor <- gl(n = 3, k = 2, labels = c("Low","Medium","High"))
# cat("\ngl() factor:\n")
# print(gl_factor)
# cat("Levels:", levels(gl_factor), "\n")




# Q6
# vec <- c(3, 7, 12, 5, 18, 9, 2, 14, 6, 11, 1, 16, 8, 4, 10)

# cat("=== Arithmetic Operations ===\n")
# cat("Sum:", sum(vec), "\n")
# cat("Mean:", mean(vec), "\n")
# cat("Each element * 2:", vec * 2, "\n")
# cat("Each element ^ 2:", vec ^ 2, "\n")

# cat("\n=== Relational Operations ===\n")
# cat("Elements > 10:", vec[vec > 10], "\n")
# cat("Elements == 5:", vec[vec == 5], "\n")

# cat("\n=== Logical Operations ===\n")
# cat("Elements > 5 AND < 15:", vec[vec > 5 & vec < 15], "\n")
# cat("Elements < 3 OR > 14:", vec[vec < 3 | vec > 14], "\n")
# cat("NOT greater than 10:", vec[!vec > 10], "\n")





# Q7

# vec <- 1:9

# even_odd_ops <- function(v) {
#   evens <- sum(v[v %% 2 == 0])
#   odds  <- prod(v[v %% 2 != 0])

#   list(evens = evens, odds = odds)
# }

# result <- even_odd_ops(vec)
# print(result$evens)
# print(result$odds)




# Q8
# cat("=== Using 'next' — skip multiples of 3 ===\n")
# for (i in 1:20) {
#   if (i %% 2 == 0) next
#   cat(i, "")
# }

# cat("\n\n=== Using 'break' — stop at first multiple of 7 > 10 ===\n")
# for (i in 1:20) {
#   if (i > 10 && i %% 7 == 0) {
#     # cat("Breaking at:", i, "\n")
#     break
#   }
#   cat(i, "")
# }





# Q9
# vec <- c(2, 4, 6, 8, 10)
# my_list <- list(a = 1:5, b = 6:10)

# cat("=== lapply() — returns a LIST ===\n")
# result_lapply <- lapply(my_list, function(x) x^2)
# print(result_lapply)

# cat("\n=== sapply() — returns a VECTOR/MATRIX ===\n")
# result_sapply <- sapply(vec, function(x) x^2)
# print(result_sapply)




# Q10

# check <- function(n) {
#   if (n %% 2 == 0) {
#     print("Even")
#   } else {
#     print("Odd")
#   }

#   is_prime <- T

#   if (n < 2) {
#     is_prime <- F
#   } else {
#     for (i in 2:(n - 1)) {
#       if (n %% i == 0) {
#         is_prime <- F
#         break
#       }
#     }
#   }

#   if (is_prime) {
#     print("Prime")
#   } else {
#     print("Not Prime")
#   }
# }

# print("Enter a number: ")
# n <- as.integer(readLines(con = "stdin", n = 1))

# check(n)



# Q11
.libPaths("C:/Users/taara_9f5wjs4/R/win-library/4.5")
# library(tidyr)

# # Wide format
# df_wide <- data.frame(
#   Student_ID = 1:3,
#   Name       = c("Alice", "Bob", "Carol"),
#   Math       = c(85, 90, 78),
#   Science    = c(88, 76, 92),
#   English    = c(79, 85, 88)
# )
# # cat("=== Wide Format ===\n"); print(df_wide)

# # Wide → Long
# df_long <- pivot_longer(df_wide,
#                         cols = c(Math, Science, English),
#                         names_to  = "Subject",
#                         values_to = "Marks")
# print("\n=== Long Format ===\n"); print(df_long)

# # Long → Wide
# df_wide_again <- pivot_wider(df_long,
#                              names_from  = "Subject",
#                              values_from = "Marks")
# print("\n=== Back to Wide ===\n"); print(df_wide_again)




# Q12
# library(reshape2)

# # Custom dataset
# df <- data.frame(
#   ID    = 1:4,
#   Name  = c("Alice","Bob","Carol","Dave"),
#   Math  = c(85, 90, 78, 88),
#   Science = c(92, 76, 88, 95)
# )

# # Melt (Wide → Long)
# df_melted <- melt(df, id.vars = c("ID","Name"),
#                   variable.name = "Subject",
#                   value.name    = "Score")
# cat("\n=== After melt() — Long Format ===\n"); print(df_melted)

# # Cast (Long → Wide)
# df_cast <- dcast(df_melted, ID + Name ~ Subject, value.var = "Score")
# cat("\n=== After dcast() — Wide Format ===\n"); print(df_cast)





# Q13
# x <- "Data Science is growing rapidly"
# substr(x,1,12)
# length(strsplit(x," ")[[1]])
# toupper(x)
# regexpr("Science", x)[1]





# Q14
# x <- "R is good and R is easy"
# words <- strsplit(x," ")[[1]]
# print(words)
# table(words)





# Q15
# s1 <- "Hello"
# s2 <- "World"

# # Concatenate
# cat("Concatenated:", paste(s1, s2), "\n")

# # Repeat string 3 times
# cat("Repeated:", paste(rep(s1, 3)), "\n")

# # Remove all spaces
# original <- "Data Science is fun"
# gsub(" ","",original)




# Q16
# write.csv(data.frame(
#   Name  = c("Alice","Bob","Carol","Dave"),
#   Score = c(85, 90, 78, 92),
#   Age   = c(21, 22, 20, 23)
# ), "students.csv", row.names = FALSE)

# data <- read.csv("students.csv")
# summary(data)
# str(data)
# mean(data[,2])
# median(data[,2])





# Q17
# df <- data.frame(
#   Math    = c(85, 90, 78, 92),
#   Science = c(88, 76, 92, 85),
#   English = c(79, 85, 88, 90)
# )

# col_means <- apply(df, 2, mean)   # 2 = columns
# print(col_means)

# result_l <- lapply(df, mean)
# print(result_l)
# print(class(result_l))





# Q18
# .libPaths("C:/Users/taara_9f5wjs4/R/win-library/4.5")
library(ggplot2)

# df <- data.frame(
#   Student = c("Alice","Bob","Carol","Dave","Eve"),
#   Marks   = c(85, 90, 78, 92, 88)
# )

# # Bar Chart
# ggplot(df, aes(x = Student, y = Marks, fill = Student)) +
#   geom_bar(stat = "identity") +
#   ggtitle("Bar Chart: Student Marks") +
#   theme_minimal()

# # Histogram
# ggplot(df, aes(x = Marks)) +
#   geom_histogram(binwidth = 5, fill = "steelblue", color = "white") +
#   ggtitle("Histogram of Marks") +
#   theme_minimal()

# # Boxplot
# ggplot(df, aes(y = Marks)) +
#   geom_boxplot(fill = "tomato") +
#   ggtitle("Boxplot of Marks") +
#   theme_minimal()



# df <- data.frame(Name=c("A","B","C"), Marks=c(80,70,90))
# ggplot(df,aes(Name,Marks))+geom_bar(stat="identity")
# ggplot(df,aes(Marks))+geom_histogram(binwidth=5)
# ggplot(df,aes(y=Marks))+geom_boxplot()




# Q19
# .libPaths("C:/Users/taara_9f5wjs4/R/win-library/4.5")

# library(ggplot2)

# df <- data.frame(x=c(1,2,3,4,5), y=c(2,4,5,4,6))
# ggplot(df,aes(x,y))+geom_point()+geom_smooth(method="lm",se=FALSE)





# Q20
# library(ggplot2)

# set.seed(1)
# df <- data.frame(values = rnorm(200, mean = 50, sd = 10))

# # Density Plot
# ggplot(df, aes(x = values)) +
#   geom_density(fill = "skyblue", alpha = 0.5) +
#   ggtitle("Density Plot") + theme_minimal()

# # Frequency Polygon
# ggplot(df, aes(x = values)) +
#   geom_freqpoly(binwidth = 5, color = "darkred", linewidth = 1) +
#   ggtitle("Frequency Polygon") + theme_minimal()



# library(ggplot2)
# df <- data.frame(x=rnorm(100))
# ggplot(df,aes(x))+geom_density()
# ggplot(df,aes(x))+geom_freqpoly(binwidth=0.5)


# Q21
# df = data.frame(
#   ID    = 1:2,
#   Name  = c("Alice","Bob"),
#   Marks = c(85, 90)
# )
# print(df)

# # Add column
# df$Grade = c("A","A+")
# print(df)

# # Delete column
# df$Marks = NULL
# print(df)

# # Rename column
# colnames(df)[colnames(df) == "Name"] = "Student_Name"
# print(df)








# Q22
# df <- data.frame(
#   A = c(1, NA, 3, NA, 5),
#   B = c(NA, 2, NA, 4, 5),
#   C = c(1,  2,  3,  4, NA)
# )

# cat("=== NA count per column ===\n")
# print(colSums(is.na(df)))

# cat("\n=== Non-NA count per column ===\n")
# print(colSums(!is.na(df)))

# cat("\nTotal NAs in dataset:", sum(is.na(df)), "\n")
# cat("Total Non-NAs in dataset:", sum(!is.na(df)), "\n")




# Q23
# my_list <- list(
#   ID    = c(1, 2, 3, 4),
#   Name  = c("Alice","Bob","Carol","Dave"),
#   Score = c(85, 90, 78, 92)
# )

# cat("=== Original List ===\n")
# print(my_list)

# # Convert to data frame
# df <- as.data.frame(my_list)

# cat("\n=== Converted Data Frame ===\n")
# print(df)

# cat("\n=== Structure of Data Frame ===\n")
# str(df)
