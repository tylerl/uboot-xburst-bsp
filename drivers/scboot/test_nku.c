unsigned int rsakr[31] = {
	0x1875b201,0xafca9097,0xb62b0848,0x7e56785b,
	0x7465b097,0xfda5ce57,0x5f0623b9,0xa16f599c,
	0x083bac6a,0xb2046cf9,0x9c65ead8,0xd2dad6b6,
	0x39b99fb9,0x42962f79,0x1921ac64,0xaa9648ad,
	0x4056b380,0xb828415d,0x2df96d34,0xe71b2eac,
	0xa18d080b,0x0f4cedf4,0x432b5268,0x8ac3eea4,
	0x93752008,0x4bc46265,0x5ba7dc09,0x19103a4b,
	0x92b04164,0x6fc8da2b,0x001c35a6
};
//public key
unsigned int rsaku[31] = {
	0xac18e8f9,0x0dadd504,0xa7f71139,0xa7f42638,
	0xfdc562ee,0x8721d7a2,0xe3c6d1a4,0x8f9022f7,
	0xd8395869,0xfed595d0,0x5bcc815b,0x40977a9f,
	0xf82abdcd,0x3e11628f,0x7b25f4c9,0x1ebbb71a,
	0x957333aa,0x27185817,0xf0986427,0xee41a435,
	0x193fa647,0x164a66e9,0xbb538daa,0xd8a4b381,
	0x2b2ae0ac,0x9bba9024,0xe82b8586,0xece5f29b,
	0xb2968367,0xebbc954f,0x00675034
};

unsigned int rsakuckenc[31] = {
	0xd5eb6d2c, 0x45a2ab21, 0x485ac5de, 0x3e4ae8c9,
	0x746654d7, 0x489a8b11, 0x8de306d7, 0x6c7a70e0,
	0x45175b63, 0xbebe563a, 0x5c137509, 0xdff413fc,
	0x1b7eb0e8, 0x7474d94e, 0xf3ac7c06, 0x6837d8ff,
	0x1c3dbc55, 0x46c78fd4, 0x64f3efff, 0xd6df7977,
	0xcb7c9702, 0xb624f967, 0x6aa4bd53, 0x5a54ca3c,
	0xfd7fb893, 0x52285b3c, 0x066e5959, 0x33912a1a,
	0x5960beea, 0x395f8675, 0x33663f04
};

unsigned int rsakuukenc[31] = {
	0x57ee5dfd, 0x41008992, 0x1f5c25f4, 0x4aec27e0,
	0x24ae4623, 0x10cc2ac4, 0xc0d763f3, 0xa0121415,
	0xda66faef, 0xe96c8455, 0x328d2c33, 0x7632b126,
	0x3924a122, 0x0291aca1, 0x67205e1d, 0x573da67f,
	0xfebca1e6, 0xe05c4546, 0x219255da, 0x009886e0,
	0x1c92fa14, 0x061b9248, 0x6834134d, 0x4940f121,
	0xc1d43c2b, 0xb036e1dc, 0x4fc65fba, 0x033a0854,
	0x0c0d8870, 0xd0678ca8, 0x3ef6dd39
};
/* for(i = 0; i < 31; i++)key[i] = pub[i]; */

unsigned int rsan[31] = {
	0x4cf340a7,0x454d86e5,0xec5f3fcf,0xecd60219,
	0xe0b46b16,0x4c113d75,0xd7f013a4,0xd8bf9522,
	0xd30dac43,0x17405691,0x67df8be3,0x47779016,
	0x729d60dc,0xa8f37c16,0xbea479b0,0x64b24d74,
	0xc89580bb,0x588cc5d6,0x4bcd6576,0xbbdab8d7,
	0x6ef2cc06,0x6941da66,0xb5dfab69,0x9fcf95fc,
	0xd36e6c3f,0x305cde18,0xf9c7550a,0xa8baad8e,
	0x4e91b67f,0x76da499f,0x00afc50b
};

unsigned int rsanckenc[31] = {
	0x0742e7c3, 0x40a13be2, 0xc64f81df, 0xb123565a,
	0x684f4d38, 0xe16c6799, 0x67de674a, 0x8f81e9aa,
	0x6bb0be34, 0x12e489fb, 0xb4930f2a, 0x83feed86,
	0x01dfe5d0, 0x0bfff690, 0x5a5535e8, 0x2015949f,
	0x9b90ca74, 0x11c69bba, 0xf8b5a07a, 0x134808b9,
	0x00b13e02, 0xe84d4fe4, 0x8b25b0fe, 0x5b96037a,
	0xd833c171, 0x67bd6f72, 0x62ccd4f5, 0xf1ba37c0,
	0xb6f246e8, 0x0bc6edc4, 0xb9f52b5d
};

unsigned int rsanukenc[31] = {
	0x816a1b0b, 0xd23fb9cb, 0xcd6a260b, 0x948bad17,
	0x355a3896, 0x530f1f92, 0x5ce9cb9b, 0x023bd62d,
	0x6ac31701, 0x26d55cf5, 0x2fa530c9, 0x008b6fab,
	0x95aaecb5, 0xbb8dc603, 0x3d40ff17, 0x5d82b86c,
	0xd0e3ea5c, 0x3afebac4, 0x53177330, 0x587fa069,
	0x5739d6b6, 0xde71c8a6, 0x735add37, 0xb30298dc,
	0xb3432c5b, 0xe07794ba, 0x7d81dca9, 0xebe39a95,
	0xed9145ea, 0xb694435b, 0x0a158b7a
};


unsigned int nku1sig[4] = {0x69cfa45b, 0x18a1eb8d, 0x6c62fba9, 0xda051983};
/*unsigned int nku1sigrkenc[4] = {0x6d2e6b0a, 0x5270e719, 0xb056dd2a, 0xd5fff04c};*/
unsigned int nku1sigrkenc[4] = {0x661b2c7a, 0x4c6b5ec2, 0xd58882bc, 0xd51cd190};

unsigned int nku1[62] = {
	0x4cf340a7,0x454d86e5,0xec5f3fcf,0xecd60219,
	0xe0b46b16,0x4c113d75,0xd7f013a4,0xd8bf9522,
	0xd30dac43,0x17405691,0x67df8be3,0x47779016,
	0x729d60dc,0xa8f37c16,0xbea479b0,0x64b24d74,
	0xc89580bb,0x588cc5d6,0x4bcd6576,0xbbdab8d7,
	0x6ef2cc06,0x6941da66,0xb5dfab69,0x9fcf95fc,
	0xd36e6c3f,0x305cde18,0xf9c7550a,0xa8baad8e,
	0x4e91b67f,0x76da499f,0x00afc50b,

	0xac18e8f9,0x0dadd504,0xa7f71139,0xa7f42638,
	0xfdc562ee,0x8721d7a2,0xe3c6d1a4,0x8f9022f7,
	0xd8395869,0xfed595d0,0x5bcc815b,0x40977a9f,
	0xf82abdcd,0x3e11628f,0x7b25f4c9,0x1ebbb71a,
	0x957333aa,0x27185817,0xf0986427,0xee41a435,
	0x193fa647,0x164a66e9,0xbb538daa,0xd8a4b381,
	0x2b2ae0ac,0x9bba9024,0xe82b8586,0xece5f29b,
	0xb2968367,0xebbc954f,0x00675034
};


unsigned int rsan128[4] = {0x6c315954, 0x11067b43, 0x6aabc06e, 0x5f66800a};
unsigned int rsakr128[4] = {0x4b514551, 0x1a22480a, 0xdec7f9ff, 0xfba386d3};
unsigned int rsaku128[4] = {0xaed45037, 0x2ead9998, 0x62fe8b9e, 0xf3a483dd};

