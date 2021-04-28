/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/Versions/A/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSUUID;

@interface AFAudioDeviceInfo : NSObject <NSCopying, NSSecureCoding> {

	char _isRemoteDevice;
	NSString* _route;
	NSUUID* _deviceUID;

}

@property (nonatomic,copy,readonly) NSString * route;                //@synthesize route=_route - In the implementation block
@property (nonatomic,readonly) char isRemoteDevice;                  //@synthesize isRemoteDevice=_isRemoteDevice - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * deviceUID;              //@synthesize deviceUID=_deviceUID - In the implementation block
+(char)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)deviceUID;
-(NSString *)route;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(char)isRemoteDevice;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)initWithRoute:(id)arg1 isRemoteDevice:(char)arg2 deviceUID:(id)arg3 ;
@end

