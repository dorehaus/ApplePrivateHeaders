/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:57 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/Versions/A/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariCore/SafariCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WBSMemoryFootprintMallocZone : NSObject <NSSecureCoding> {

	unsigned long long _addr;
	malloc_statistics_t _statistics;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long sizeInUse; 
@property (nonatomic,readonly) unsigned long long sizeAllocated; 
+(char)supportsSecureCoding;
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithMallocZone:(malloc_zone_t*)arg1 ;
-(unsigned long long)sizeInUse;
-(unsigned long long)sizeAllocated;
@end

