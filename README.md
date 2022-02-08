to compile the coede use 
g++ -std=c++11 -O2 -Wall <code_name>.cpp -o test

To add the boost library 

Get the version of Boost that you require. This is for 1.55 but feel free to change or manually download yourself (Boost download page):

wget -O boost_1_55_0.tar.gz https://sourceforge.net/projects/boost/files/boost/1.55.0/boost_1_55_0.tar.gz/download
tar xzvf boost_1_55_0.tar.gz
cd boost_1_55_0/

Get the required libraries, main ones are icu for boost::regex support:

sudo apt-get update
sudo apt-get install build-essential g++ python-dev autotools-dev libicu-dev libbz2-dev 

Boost's bootstrap setup:

./bootstrap.sh --prefix=/usr/local

If we want MPI then we need to set the flag in the user-config.jam file:

user_configFile=`find $PWD -name user-config.jam`
echo "using mpi ;" >> $user_configFile

Find the maximum number of physical cores:

n=`cat /proc/cpuinfo | grep "cpu cores" | uniq | awk '{print $NF}'`

Install boost in parallel:

sudo ./b2 --with=all -j $n install 

Assumes you have /usr/local/lib setup already. if not, you can add it to your LD LIBRARY PATH:

sudo sh -c 'echo "/usr/local/lib" >> /etc/ld.so.conf.d/local.conf'

Reset the ldconfig:

sudo ldconfig
