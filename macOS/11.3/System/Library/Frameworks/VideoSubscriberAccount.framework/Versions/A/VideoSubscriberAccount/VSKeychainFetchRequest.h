/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:28 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/Versions/A/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VSOptional, NSPredicate, NSArray;

@interface VSKeychainFetchRequest : NSObject <NSCopying> {

	char _includesDataValues;
	VSOptional* _itemKind;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	unsigned long long _fetchLimit;

}

@property (nonatomic,retain) VSOptional * itemKind;                      //@synthesize itemKind=_itemKind - In the implementation block
@property (nonatomic,copy) NSPredicate * predicate;                      //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                    //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) unsigned long long fetchLimit;              //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (assign,nonatomic) char includesDataValues;                    //@synthesize includesDataValues=_includesDataValues - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSPredicate *)predicate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(unsigned long long)fetchLimit;
-(VSOptional *)itemKind;
-(void)setItemKind:(VSOptional *)arg1 ;
-(void)setIncludesDataValues:(char)arg1 ;
-(char)includesDataValues;
@end

