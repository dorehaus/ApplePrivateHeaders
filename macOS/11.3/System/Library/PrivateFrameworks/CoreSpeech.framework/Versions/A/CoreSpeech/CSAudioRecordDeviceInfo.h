/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/Versions/A/CoreSpeech
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSpeech/CoreSpeech-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface CSAudioRecordDeviceInfo : NSObject <NSCopying, NSSecureCoding> {

	char _isRemoteDevice;
	NSString* _route;
	NSUUID* _remoteDeviceUID;
	NSString* _remoteDeviceProductIdentifier;

}

@property (nonatomic,copy,readonly) NSString * route;                                      //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) char isRemoteDevice;                                        //@synthesize isRemoteDevice=_isRemoteDevice - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * remoteDeviceUID;                              //@synthesize remoteDeviceUID=_remoteDeviceUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * remoteDeviceProductIdentifier;              //@synthesize remoteDeviceProductIdentifier=_remoteDeviceProductIdentifier - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithXPCObject:(id)arg1 ;
-(id)xpcObject;
-(NSString *)route;
-(id)initWithRoute:(id)arg1 isRemoteDevice:(char)arg2 remoteDeviceUID:(id)arg3 remoteDeviceProductIdentifier:(id)arg4 ;
-(char)isRemoteDevice;
-(NSUUID *)remoteDeviceUID;
-(id)initWithAVVCRecordDeviceInfo:(id)arg1 ;
-(NSString *)remoteDeviceProductIdentifier;
@end

