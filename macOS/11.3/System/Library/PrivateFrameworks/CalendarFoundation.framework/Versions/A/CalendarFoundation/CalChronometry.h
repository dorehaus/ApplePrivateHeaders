/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:35 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/Versions/A/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CalChronometry : NSObject
+(void)initialize;
+(id)currentLanguageCode;
+(id)activeTimeZone;
+(id)activeCalendar;
+(void)_configureChronometry;
+(void)_updateActiveCalendar;
+(void)_currentLocaleDidChange:(id)arg1 ;
+(void)_currentTimeZoneDidChange:(id)arg1 ;
+(void)_updateForLocaleChange;
+(void)_updateEveything;
+(void)_updateActiveTimeZone;
+(void)setActiveTimeZone:(id)arg1 ;
+(id)currentLocationCode;
@end

