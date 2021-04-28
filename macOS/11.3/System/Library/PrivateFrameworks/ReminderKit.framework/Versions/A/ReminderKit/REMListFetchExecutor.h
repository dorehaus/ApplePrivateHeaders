/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/Versions/A/ReminderKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReminderKit/_REMFetchExecutor.h>

@class REMListPredicateDescriptor, NSArray;

@interface REMListFetchExecutor : _REMFetchExecutor {

	REMListPredicateDescriptor* _predicateDescriptor;
	NSArray* _sortDescriptors;
	unsigned long long _options;

}

@property (nonatomic,retain) REMListPredicateDescriptor * predicateDescriptor;              //@synthesize predicateDescriptor=_predicateDescriptor - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                                     //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                  //@synthesize options=_options - In the implementation block
+(char)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)options;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(id)resultsFromFetchResult:(id)arg1 inStore:(id)arg2 error:(id*)arg3 ;
-(REMListPredicateDescriptor *)predicateDescriptor;
-(id)initWithPredicateDescriptor:(id)arg1 sortDescriptors:(id)arg2 options:(unsigned long long)arg3 ;
-(id)resultsFromFetchResult:(id)arg1 inAccount:(id)arg2 error:(id*)arg3 ;
-(id)resultsFromFetchResult:(id)arg1 inParentList:(id)arg2 error:(id*)arg3 ;
-(void)setPredicateDescriptor:(REMListPredicateDescriptor *)arg1 ;
@end

