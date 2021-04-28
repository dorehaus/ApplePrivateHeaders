/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOVenueLabel.h>
@class NSString;


@protocol GEOVenueLabel
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * shortName; 
@property (nonatomic,readonly) NSString * detail; 
@required
-(NSString *)name;
-(NSString *)detail;
-(NSString *)shortName;

@end


@class NSString;

@interface GEOVenueLabel : NSObject <GEOVenueLabel> {

	NSString* _name;
	NSString* _shortName;
	NSString* _detail;

}

@property (nonatomic,readonly) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * shortName;              //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,readonly) NSString * detail;                 //@synthesize detail=_detail - In the implementation block
-(id)init;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(NSString *)detail;
-(id)initWithLabel:(id)arg1 ;
-(id)initWithName:(id)arg1 shortName:(id)arg2 detail:(id)arg3 ;
-(NSString *)shortName;
@end
