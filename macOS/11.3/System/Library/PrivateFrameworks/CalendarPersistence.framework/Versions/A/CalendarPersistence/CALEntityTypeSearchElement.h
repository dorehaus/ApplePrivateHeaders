/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CalendarPersistence-Structs.h>
#import <CalendarPersistence/CALSearchElement.h>

@class CALTimeRange;

@interface CALEntityTypeSearchElement : CALSearchElement {

	int _type;
	CALTimeRange* _range;

}
+(id)allEntitiesSearchElement;
+(id)searchWithEntityType:(int)arg1 ;
+(id)searchWithEntityType:(int)arg1 withinTimeRange:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimeRange:(id)arg1 ;
-(id)timeRange;
-(int)entityType;
-(char)matchesEntity:(id)arg1 ;
-(id)initWithEntityType:(int)arg1 withinTimeRange:(id)arg2 ;
@end

