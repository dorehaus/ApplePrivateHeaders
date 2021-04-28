/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSDate, NSString;

@interface CalDAVRecurrenceSplitAction : NSObject {

	char _isFloating;
	char _isAllDay;
	NSURL* _resourceURL;
	NSDate* _recurrenceDate;
	NSString* _uidForCreatedSeries;

}

@property (nonatomic,readonly) NSURL * resourceURL;                         //@synthesize resourceURL=_resourceURL - In the implementation block
@property (nonatomic,readonly) NSDate * recurrenceDate;                     //@synthesize recurrenceDate=_recurrenceDate - In the implementation block
@property (nonatomic,readonly) NSString * uidForCreatedSeries;              //@synthesize uidForCreatedSeries=_uidForCreatedSeries - In the implementation block
@property (nonatomic,readonly) char isFloating;                             //@synthesize isFloating=_isFloating - In the implementation block
@property (nonatomic,readonly) char isAllDay;                               //@synthesize isAllDay=_isAllDay - In the implementation block
-(NSURL *)resourceURL;
-(char)isFloating;
-(char)isAllDay;
-(NSDate *)recurrenceDate;
-(NSString *)uidForCreatedSeries;
-(id)initWithResourceURL:(id)arg1 recurrenceDate:(id)arg2 uidForCreatedSeries:(id)arg3 floating:(char)arg4 allday:(char)arg5 ;
@end

