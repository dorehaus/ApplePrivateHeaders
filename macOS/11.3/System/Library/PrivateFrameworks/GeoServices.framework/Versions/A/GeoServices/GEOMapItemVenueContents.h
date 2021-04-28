/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOMapItemVenueContents.h>
@class NSString, NSArray;


@protocol GEOMapItemVenueContents <NSObject>
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSArray * items; 
@required
-(NSString *)title;
-(NSArray *)items;

@end


@class NSString, NSArray;

@interface GEOMapItemVenueContents : NSObject <GEOMapItemVenueContents> {

	NSString* _title;
	NSArray* _items;

}

@property (nonatomic,readonly) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSArray * items;                     //@synthesize items=_items - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)title;
-(NSArray *)items;
-(id)initWithTitle:(id)arg1 items:(id)arg2 ;
-(id)initWithItemList:(id)arg1 ;
@end

