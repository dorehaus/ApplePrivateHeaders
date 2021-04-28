/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRCryptoPairingSessionDelegate;
#import <MediaRemote/MediaRemote-Structs.h>
@class MRDeviceInfo, NSArray;

@interface MRCryptoPairingSession : NSObject {

	MRDeviceInfo* _device;
	unsigned long long _role;
	id<MRCryptoPairingSessionDelegate> _delegate;

}

@property (nonatomic,readonly) MRDeviceInfo * device;                                         //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) unsigned long long role;                                       //@synthesize role=_role - In the implementation block
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (getter=isPaired,nonatomic,readonly) char paired; 
@property (nonatomic,readonly) NSArray * pairedDevices; 
@property (assign,nonatomic,__weak) id<MRCryptoPairingSessionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)init;
-(char)isValid;
-(id<MRCryptoPairingSessionDelegate>)delegate;
-(void)open;
-(void)close;
-(void)setDelegate:(id<MRCryptoPairingSessionDelegate>)arg1 ;
-(unsigned long long)role;
-(MRDeviceInfo *)device;
-(NSArray *)pairedDevices;
-(char)isPaired;
-(id)initWithRole:(unsigned long long)arg1 device:(id)arg2 ;
-(id)removePeer;
-(id)updatePeer;
-(void)handlePairingExchangeData:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)handlePairingFailureWithStatus:(int)arg1 ;
-(id)encryptData:(id)arg1 withError:(id*)arg2 ;
-(id)decryptData:(id)arg1 withError:(id*)arg2 ;
-(char)deleteIdentityWithError:(id*)arg1 ;
@end
