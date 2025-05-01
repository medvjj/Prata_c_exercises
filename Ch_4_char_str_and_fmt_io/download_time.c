#include <stdio.h>

int
main (void)
{
  float download_speed_MBits, filesize_MBytes, MBytes_to_Mbits, download_time;
  printf(" Enter download speed in MBits: ");
  scanf("%f", &download_speed_MBits);
  printf(" Enter file size in MBytes: ");
  scanf("%f", &filesize_MBytes);
  MBytes_to_Mbits = filesize_MBytes * 8;
  download_time = MBytes_to_Mbits / download_speed_MBits;
  printf(" At a download speed of %.2f megabits per second, a %.2f megabyte file is downloaded in %.2f seconds\n", download_speed_MBits, filesize_MBytes, download_time);
  
  return 0;
}
