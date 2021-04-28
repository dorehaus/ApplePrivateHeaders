/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/Versions/A/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTSectionQueueDescriptor.h>

@class NSArray;

@interface NTQueueConfigSectionQueueDescriptor : NSObject <NTSectionQueueDescriptor> {

	NSArray* _sectionDescriptors;
	unsigned long long _visibleSectionConfigsLimit;

}

@property (nonatomic,copy,readonly) NSArray * sectionDescriptors;                          //@synthesize sectionDescriptors=_sectionDescriptors - In the implementation block
@property (nonatomic,readonly) unsigned long long visibleSectionConfigsLimit;              //@synthesize visibleSectionConfigsLimit=_visibleSectionConfigsLimit - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSArray *)sectionDescriptors;
-(unsigned long long)visibleSectionConfigsLimit;
-(id)initWithQueueConfig:(id)arg1 appConfiguration:(id)arg2 todayData:(id)arg3 supplementalFeedFilterOptions:(long long)arg4 respectsWidgetVisibleSectionsLimit:(char)arg5 ;
@end

