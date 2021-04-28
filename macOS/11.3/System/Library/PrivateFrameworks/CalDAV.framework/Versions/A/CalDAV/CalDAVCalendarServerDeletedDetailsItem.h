/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:36 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/Versions/A/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDAV/CoreDAVItem.h>

@class NSString, ICSDateValue;

@interface CalDAVCalendarServerDeletedDetailsItem : CoreDAVItem {

	char _hadMoreInstances;
	NSString* _componentType;
	NSString* _summary;
	NSString* _displayName;
	ICSDateValue* _nextInstance;

}

@property (nonatomic,retain) NSString * componentType;                 //@synthesize componentType=_componentType - In the implementation block
@property (nonatomic,retain) NSString * summary;                       //@synthesize summary=_summary - In the implementation block
@property (nonatomic,retain) NSString * displayName;                   //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) ICSDateValue * nextInstance;              //@synthesize nextInstance=_nextInstance - In the implementation block
@property (assign,nonatomic) char hadMoreInstances;                    //@synthesize hadMoreInstances=_hadMoreInstances - In the implementation block
-(id)init;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setSummary:(NSString *)arg1 ;
-(NSString *)summary;
-(NSString *)componentType;
-(void)setComponentType:(NSString *)arg1 ;
-(id)copyParseRules;
-(void)setDisplayNameItem:(id)arg1 ;
-(void)setNextInstance:(ICSDateValue *)arg1 ;
-(void)setHadMoreInstances:(char)arg1 ;
-(void)setComponentTypeItem:(id)arg1 ;
-(void)setSummaryItem:(id)arg1 ;
-(void)setNextInstanceItem:(id)arg1 ;
-(void)setHadMoreInstancesItem:(id)arg1 ;
-(ICSDateValue *)nextInstance;
-(char)hadMoreInstances;
@end

