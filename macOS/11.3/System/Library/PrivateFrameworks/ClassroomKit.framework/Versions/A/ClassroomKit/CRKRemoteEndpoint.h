/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:22 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/Versions/A/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CRKRemoteEndpoint : NSObject <NSCopying> {

	unsigned short _port;
	NSString* _IPAddress;

}

@property (nonatomic,copy,readonly) NSString * IPAddress;                //@synthesize IPAddress=_IPAddress - In the implementation block
@property (nonatomic,readonly) unsigned short port;                      //@synthesize port=_port - In the implementation block
@property (nonatomic,copy,readonly) NSString * stringValue; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSString *)stringValue;
-(unsigned short)port;
-(id)initWithIPAddress:(id)arg1 port:(unsigned short)arg2 ;
-(NSString *)IPAddress;
-(char)isOnSameHostAsRemoteEndpoint:(id)arg1 ;
-(char)isOnSameHostButDifferentPortAsRemoteEndpoint:(id)arg1 ;
-(char)isEqualToRemoteEndpoint:(id)arg1 ;
@end
