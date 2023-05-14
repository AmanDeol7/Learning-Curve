let user = {
    blogs: ["hello", "Hi", "hey"],
    logBlogs(){
        this.blogs.forEach(function(blog) {
            console.log(blog);
        })
    }
};
console.log(user);
console.log(user.logBlogs());

