/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:39 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/WiFiPeerToPeer.framework/Versions/A/WiFiPeerToPeer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiPeerToPeer/WiFiPeerToPeer-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WiFiAwarePublishDatapathServiceSpecificInfo : NSObject <NSSecureCoding, NSCopying> {

	unsigned short _servicePort;
	long long _protocolType;
	NSString* _hostname;

}

@property (nonatomic,readonly) long long protocolType;                  //@synthesize protocolType=_protocolType - In the implementation block
@property (nonatomic,readonly) unsigned short servicePort;              //@synthesize servicePort=_servicePort - In the implementation block
@property (nonatomic,copy) NSString * hostname;                         //@synthesize hostname=_hostname - In the implementation block
+(char)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)protocolType;
-(NSString *)hostname;
-(unsigned short)servicePort;
-(id)initWithProtocolType:(long long)arg1 servicePort:(unsigned short)arg2 ;
-(void)setHostname:(NSString *)arg1 ;
-(char)hostnameEquals:(id)arg1 ;
@end

