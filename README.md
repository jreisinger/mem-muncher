Build the image

    docker build -t mem-muncher .

Turn off swapping (can take a while)

    sudo swapoff -a

Run the container

    docker run -it --rm --name mem-muncher mem-muncher

Run the container with limited memory resource

    docker run -it --rm --name mem-muncher --memory=500m mem-muncher

Check on the container

    docker stats

Kill the container

    docker kill mem-muncher

Turn on swapping

    sudo swapon -a

See [Linux ate my
memory](https://github.com/jreisinger/blog/blob/master/posts/linux-ate-my-memory.md)
for more.
