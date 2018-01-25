#include <iostream>
#include <iomanip>
#include <libusb.h>

using namespace std;

int main(void)
{
	int i, r;

	libusb_context *ctx;
	libusb_device *dev;
	libusb_device_handle *dev_handle;

	struct libusb_device_descriptor descriptor;
	struct libusb_config_descriptor *config;
	const struct libusb_interface_descriptor *altsetting;
	const libusb_endpoint_descriptor *epRead;
	const libusb_endpoint_descriptor *epWrite;
	const libusb_endpoint_descriptor *ep4TSRead;

	r = libusb_init(&ctx);
	if (r < 0)
		return r;

	dev_handle = libusb_open_device_with_vid_pid(ctx, 0x048d, 0x9306);
	if (dev_handle == NULL)
		return -1;

	dev = libusb_get_device(dev_handle);
	libusb_get_device_descriptor(dev, &descriptor);

	r = libusb_get_config_descriptor(dev, 0, &config);
	if (r)
		return r;
	altsetting = config->interface->altsetting;

	for (i = 0; i < config->interface->altsetting->bNumEndpoints; i++) {
		cout<<"EP("<<i<<"), ";
	        cout<<"addr = 0x"<<hex<<(int)altsetting->endpoint[i].bEndpointAddress<<", ";
		cout<<"attr = "<<(int)altsetting->endpoint[i].bmAttributes<<", ";
		cout<<"dir = "<<dec<<(int)(altsetting->endpoint[i].bEndpointAddress & 0x80)<<", ";
		cout<<"num = "<<(int)(altsetting->endpoint[i].bEndpointAddress & 0x0f)<<", ";
		cout<<"intval = "<<(int)altsetting->endpoint[i].bInterval<<", ";
		cout<<"maxSize = "<<(int)(libusb_cpu_to_le16(altsetting->endpoint[i].wMaxPacketSize) & 0x7ff)<<endl;
	}
	
	epRead = &altsetting->endpoint[0];
	epWrite = &altsetting->endpoint[1];
	ep4TSRead = &altsetting->endpoint[2];

	cout<<"epRead = "<<epRead<<", epWrite = "<<epWrite<<", ep4TSRead = "<<ep4TSRead<<endl;

	libusb_close(dev_handle);
	libusb_exit(ctx);

	return 0;
}
