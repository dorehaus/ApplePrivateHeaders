/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NEIKEv2PRFProtocol : NSObject <NSCopying> {

	unsigned long long _type;

}

@property (readonly) unsigned length; 
@property (assign) unsigned long long type;              //@synthesize type=_type - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)length;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
@end
