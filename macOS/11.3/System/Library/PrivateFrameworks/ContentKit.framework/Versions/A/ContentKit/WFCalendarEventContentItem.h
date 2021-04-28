/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:31 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/Versions/A/ContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContentKit/WFCalendarItemContentItem.h>

@class EKEvent;

@interface WFCalendarEventContentItem : WFCalendarItemContentItem

@property (nonatomic,readonly) EKEvent * event; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)filterDescription;
+(id)pluralFilterDescription;
+(id)countDescription;
+(id)defaultSourceForRepresentation:(id)arg1 ;
+(void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(char)hasLibrary;
+(id)itemWithEKEvent:(id)arg1 fromEventStore:(id)arg2 ;
+(id)datebyApplyingComponents:(id)arg1 toDateComponents:(id)arg2 ;
-(EKEvent *)event;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(char)canGenerateRepresentationForType:(id)arg1 ;
-(id)changeTransaction;
-(char)getListSubtitle:(/*^block*/id)arg1 ;
-(char)getListAltText:(/*^block*/id)arg1 ;
@end
