/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:05 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Metal.framework/Versions/A/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MTLMessage : NSObject {

	unsigned long long _type;
	NSString* _string;

}

@property (readonly) unsigned long long type;               //@synthesize type=_type - In the implementation block
@property (retain,readonly) NSString * string;              //@synthesize string=_string - In the implementation block
-(id)init:(unsigned long long)arg1 message:(id)arg2 ;
-(void)dealloc;
-(NSString *)string;
-(unsigned long long)type;
@end

