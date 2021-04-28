/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:06 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AMPLibrary.framework/Versions/A/AMPLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface AMPRemoveArtworkRequest : NSObject <NSSecureCoding> {

	unsigned long long _dbID;
	NSString* _uuid;
	NSArray* _persistentIDs;

}

@property (assign,nonatomic) unsigned long long dbID;              //@synthesize dbID=_dbID - In the implementation block
@property (nonatomic,retain) NSString * uuid;                      //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSArray * persistentIDs;              //@synthesize persistentIDs=_persistentIDs - In the implementation block
+(char)supportsSecureCoding;
-(char)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)uuid;
-(void)setUuid:(NSString *)arg1 ;
-(NSArray *)persistentIDs;
-(unsigned long long)dbID;
-(void)setDbID:(unsigned long long)arg1 ;
-(void)setPersistentIDs:(NSArray *)arg1 ;
@end

