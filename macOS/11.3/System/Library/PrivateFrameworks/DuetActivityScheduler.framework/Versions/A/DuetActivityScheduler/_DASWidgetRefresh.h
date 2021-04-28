/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/Versions/A/DuetActivityScheduler
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetActivityScheduler/_DASWidgetInfo.h>

@class NSDate, NSString;

@interface _DASWidgetRefresh : _DASWidgetInfo {

	char _isDASInitiated;
	NSDate* _refreshDate;
	NSString* _refreshReason;

}

@property (nonatomic,retain) NSDate * refreshDate;                  //@synthesize refreshDate=_refreshDate - In the implementation block
@property (assign,nonatomic) char isDASInitiated;                   //@synthesize isDASInitiated=_isDASInitiated - In the implementation block
@property (nonatomic,retain) NSString * refreshReason;              //@synthesize refreshReason=_refreshReason - In the implementation block
+(id)refreshAt:(id)arg1 forWidgetID:(id)arg2 ;
-(NSDate *)refreshDate;
-(void)setRefreshDate:(NSDate *)arg1 ;
-(char)isDASInitiated;
-(void)setIsDASInitiated:(char)arg1 ;
-(NSString *)refreshReason;
-(void)setRefreshReason:(NSString *)arg1 ;
@end

