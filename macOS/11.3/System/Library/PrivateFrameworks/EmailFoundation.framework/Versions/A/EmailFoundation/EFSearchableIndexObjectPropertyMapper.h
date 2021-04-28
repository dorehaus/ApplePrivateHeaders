/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:18 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/Versions/A/EmailFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EFObjectPropertyMapper.h>

@class NSDictionary, NSArray, NSString;

@interface EFSearchableIndexObjectPropertyMapper : NSObject <EFObjectPropertyMapper> {

	NSDictionary* _children;
	NSArray* _attributes;

}

@property (nonatomic,readonly) NSArray * attributes;                //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,copy) NSDictionary * children;                 //@synthesize children=_children - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)attributes;
-(NSDictionary *)children;
-(void)setChildren:(NSDictionary *)arg1 ;
-(id)initWithChildren:(id)arg1 ;
-(id)initWithAttributes:(id)arg1 ;
-(id)initWithChildren:(id)arg1 attributes:(id)arg2 ;
-(id)childForKey:(id)arg1 ;
@end
