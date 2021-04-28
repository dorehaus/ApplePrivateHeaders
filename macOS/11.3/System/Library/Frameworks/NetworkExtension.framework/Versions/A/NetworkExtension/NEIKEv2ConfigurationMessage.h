/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface NEIKEv2ConfigurationMessage : NSObject <NSCopying> {

	unsigned long long _configurationType;
	NSArray* _attributes;

}

@property (assign) unsigned long long configurationType;              //@synthesize configurationType=_configurationType - In the implementation block
@property (retain) NSArray * attributes;                              //@synthesize attributes=_attributes - In the implementation block
+(id)copyConfigurationForRequest:(id)arg1 reply:(id)arg2 ;
-(id)initWithWithAttributes:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSArray *)attributes;
-(void)setAttributes:(NSArray *)arg1 ;
-(unsigned long long)configurationType;
-(void)setConfigurationType:(unsigned long long)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
@end

