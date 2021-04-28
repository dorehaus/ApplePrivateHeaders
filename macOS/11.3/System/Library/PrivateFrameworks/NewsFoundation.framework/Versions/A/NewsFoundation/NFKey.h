/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsFoundation.framework/Versions/A/NewsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsFoundation/NewsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface NFKey : NSObject <NSCopying> {

	unsigned long long _address;
	NSString* _name;
	id _type;

}

@property (nonatomic,readonly) unsigned long long address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) NSString * name;                         //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) id type;                                 //@synthesize type=_type - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)type;
-(unsigned long long)address;
-(id)copyWithName:(id)arg1 ;
-(id)initWithAddressOfType:(id)arg1 name:(id)arg2 ;
-(id)initWithTypeName:(id)arg1 name:(id)arg2 ;
-(id)initWithAddress:(unsigned long long)arg1 type:(id)arg2 name:(id)arg3 ;
@end

