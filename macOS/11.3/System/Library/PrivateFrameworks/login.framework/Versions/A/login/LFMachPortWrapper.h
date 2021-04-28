/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:08 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/login.framework/Versions/A/login
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface LFMachPortWrapper : NSObject <NSSecureCoding> {

	long long _type;
	unsigned _machPort;

}

@property (readonly) long long type;                 //@synthesize type=_type - In the implementation block
@property (readonly) unsigned machPort;              //@synthesize machPort=_machPort - In the implementation block
+(id)machPortWrapperWithMachPort:(unsigned)arg1 ofType:(long long)arg2 ;
+(char)supportsSecureCoding;
-(id)initWithMachPort:(unsigned)arg1 ofType:(long long)arg2 ;
-(id)description;
-(unsigned)machPort;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)type;
@end

