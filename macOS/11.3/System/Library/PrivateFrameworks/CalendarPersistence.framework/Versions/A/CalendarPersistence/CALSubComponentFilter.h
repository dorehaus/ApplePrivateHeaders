/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:37 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarPersistence.framework/Versions/A/CalendarPersistence
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CalendarPersistence/CALFilter.h>

@class NSArray;

@interface CALSubComponentFilter : CALFilter {

	NSArray* _classes;
	int _mode;

}
+(id)filterSubComponentsWithClasses:(id)arg1 withMode:(int)arg2 ;
-(void)applyTo:(id)arg1 ;
-(id)initWithSubComponentsWithClasses:(id)arg1 withMode:(int)arg2 ;
@end

