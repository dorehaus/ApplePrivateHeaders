/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:23 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/Versions/A/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/HAPTLVBase.h>
#import <libobjc.A.dylib/HAPTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface HMDEndPointAddress : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding> {

	char _isIPv6Address;
	NSString* _ipAddress;
	NSNumber* _videoRTPPort;
	NSNumber* _audioRTPPort;

}

@property (nonatomic,copy,readonly) NSString * ipAddress;                 //@synthesize ipAddress=_ipAddress - In the implementation block
@property (nonatomic,readonly) char isIPv6Address;                        //@synthesize isIPv6Address=_isIPv6Address - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * videoRTPPort;              //@synthesize videoRTPPort=_videoRTPPort - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * audioRTPPort;              //@synthesize audioRTPPort=_audioRTPPort - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(NSString *)ipAddress;
-(NSNumber *)audioRTPPort;
-(char)_parseFromTLVData;
-(id)tlvData;
-(char)isIPv6Address;
-(NSNumber *)videoRTPPort;
-(id)initWithIPAddress:(id)arg1 isIPv6Address:(char)arg2 videoRTPPort:(id)arg3 audioRTPPort:(id)arg4 ;
-(char)compatibleWithRemoteEndPoint:(id)arg1 ;
@end

