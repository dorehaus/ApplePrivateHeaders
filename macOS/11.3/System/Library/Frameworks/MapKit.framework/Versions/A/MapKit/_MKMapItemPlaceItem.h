/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:16 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/MapKit.framework/Versions/A/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/_MKPlaceItem.h>

@class NSString, MKMapItem, EKCalendarItem, CNContact;

@interface _MKMapItemPlaceItem : NSObject <_MKPlaceItem> {

	MKMapItem* _mapItem;
	unsigned long long _options;
	char _isIntermediateMapItem;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) MKMapItem * mapItem; 
@property (nonatomic,readonly) char isIntermediateMapItem; 
@property (nonatomic,readonly) EKCalendarItem * calendarItem; 
@property (nonatomic,readonly) CNContact * contact; 
@property (nonatomic,readonly) char isContactPersisted; 
@property (nonatomic,readonly) char hasContactOnly; 
@property (nonatomic,readonly) unsigned long long options; 
+(id)placeItemWithMapItem:(id)arg1 options:(unsigned long long)arg2 ;
+(id)placeItemWithMapItem:(id)arg1 options:(unsigned long long)arg2 isIntermediateMapItem:(char)arg3 ;
-(NSString *)name;
-(unsigned long long)options;
-(CNContact *)contact;
-(MKMapItem *)mapItem;
-(char)isIntermediateMapItem;
-(EKCalendarItem *)calendarItem;
-(char)isContactPersisted;
-(char)hasContactOnly;
-(void)setIsSuggestedFavorite:(char)arg1 ;
@end
