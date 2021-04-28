/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreServices.framework/Versions/A/Frameworks/SharedFileList.framework/Versions/A/SharedFileList
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDictionary;

@interface _SFLList : NSObject <NSSecureCoding> {

	NSString* _identifier;
	unsigned long long _seed;
	NSArray* _items;
	NSDictionary* _properties;

}

@property (readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (assign) unsigned long long seed;                  //@synthesize seed=_seed - In the implementation block
@property (readonly) NSArray * items;                        //@synthesize items=_items - In the implementation block
@property (readonly) NSDictionary * properties;              //@synthesize properties=_properties - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(NSArray *)items;
-(NSDictionary *)properties;
-(unsigned long long)seed;
-(void)setSeed:(unsigned long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 items:(id)arg2 properties:(id)arg3 ;
@end

