/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRExternalDeviceTransport.h>

@class MRDeviceInfo, NSNetService;

@interface MRNetServiceTransport : MRExternalDeviceTransport {

	MRDeviceInfo* _deviceInfo;
	char _requiresCustomPairing;
	NSNetService* _netService;

}

@property (nonatomic,retain) NSNetService * netService;               //@synthesize netService=_netService - In the implementation block
@property (assign,nonatomic) char requiresCustomPairing; 
+(id)createDeviceInfoFromTXTRecord:(id)arg1 ;
+(id)createDeviceInfoFromNetService:(id)arg1 ;
-(id)description;
-(id)name;
-(id)error;
-(long long)port;
-(long long)connectionType;
-(void)reset;
-(id)hostname;
-(id)deviceInfo;
-(char)shouldUseSystemAuthenticationPrompt;
-(void)setShouldUseSystemAuthenticationPrompt:(char)arg1 ;
-(char)getInputStream:(id*)arg1 outputStream:(id*)arg2 userInfo:(id)arg3 ;
-(char)requiresCustomPairing;
-(void)updateDeviceInfoWithTXTRecord:(id)arg1 ;
-(id)initWithNetService:(id)arg1 ;
-(void)setNetService:(NSNetService *)arg1 ;
-(void)setRequiresCustomPairing:(char)arg1 ;
-(NSNetService *)netService;
@end
