/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/AddressBook.framework/Versions/A/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ABPersonListHeadlining.h>

@class NSMutableDictionary, NSString;

@interface ABPersonListHeadliner : NSObject <ABPersonListHeadlining> {

	NSMutableDictionary* _sectionTableEntries;
	long long _sectioningThreshold;
	unsigned long long _countLabelThreshold;
	unsigned long long _numberOfMeCards;
	char _vibrantHeaders;

}

@property (assign,nonatomic) unsigned long long numberOfMeCards;                  //@synthesize numberOfMeCards=_numberOfMeCards - In the implementation block
@property (assign,nonatomic) long long sectioningThreshold;                       //@synthesize sectioningThreshold=_sectioningThreshold - In the implementation block
@property (assign,nonatomic) unsigned long long countLabelThreshold;              //@synthesize countLabelThreshold=_countLabelThreshold - In the implementation block
@property (assign,nonatomic) char vibrantHeaders;                                 //@synthesize vibrantHeaders=_vibrantHeaders - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(void)setSectioningThreshold:(long long)arg1 ;
-(void)setCountLabelThreshold:(unsigned long long)arg1 ;
-(id)bucketedEntriesForSortedEntries:(id)arg1 ;
-(void)setVibrantHeaders:(char)arg1 ;
-(unsigned long long)countLabelThreshold;
-(unsigned long long)numberOfMeCards;
-(char)vibrantHeaders;
-(id)bucketsForSortedEntries:(id)arg1 ;
-(long long)sectioningThreshold;
-(void)setNumberOfMeCards:(unsigned long long)arg1 ;
-(id)bucketForKey:(id)arg1 inBuckets:(id)arg2 ;
-(void)addEntriesToArray:(id)arg1 forHeader:(id)arg2 withBuckets:(id)arg3 rules:(id)arg4 ;
@end

