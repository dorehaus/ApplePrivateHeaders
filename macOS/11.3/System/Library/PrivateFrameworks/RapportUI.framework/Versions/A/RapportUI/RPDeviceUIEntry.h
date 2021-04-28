/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/RapportUI.framework/Versions/A/RapportUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSImage, RPDevice, CUPairedPeer;

@interface RPDeviceUIEntry : NSObject {

	char _connected;
	char _paired;
	NSString* _bestName;
	NSImage* _deviceImage;
	RPDevice* _discoveredDevice;
	NSString* _model;
	CUPairedPeer* _pairedPeer;

}

@property (nonatomic,copy) NSString * bestName;                        //@synthesize bestName=_bestName - In the implementation block
@property (assign,nonatomic) char connected;                           //@synthesize connected=_connected - In the implementation block
@property (nonatomic,retain) NSImage * deviceImage;                    //@synthesize deviceImage=_deviceImage - In the implementation block
@property (nonatomic,retain) RPDevice * discoveredDevice;              //@synthesize discoveredDevice=_discoveredDevice - In the implementation block
@property (nonatomic,copy) NSString * model;                           //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) char paired;                              //@synthesize paired=_paired - In the implementation block
@property (nonatomic,retain) CUPairedPeer * pairedPeer;                //@synthesize pairedPeer=_pairedPeer - In the implementation block
-(NSString *)model;
-(void)setModel:(NSString *)arg1 ;
-(char)connected;
-(void)setConnected:(char)arg1 ;
-(CUPairedPeer *)pairedPeer;
-(void)setPairedPeer:(CUPairedPeer *)arg1 ;
-(char)paired;
-(void)setPaired:(char)arg1 ;
-(NSString *)bestName;
-(NSImage *)deviceImage;
-(void)setDeviceImage:(NSImage *)arg1 ;
-(void)setBestName:(NSString *)arg1 ;
-(RPDevice *)discoveredDevice;
-(void)setDiscoveredDevice:(RPDevice *)arg1 ;
@end

